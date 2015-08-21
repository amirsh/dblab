package ch.epfl.data
package dblab.legobase
package frontend

import schema._
import scala.reflect._
import OperatorAST._
import scala.reflect.runtime.{ universe => ru }
import ru._
import ch.epfl.data.dblab.legobase.queryengine.GenericEngine

class SQLTreeToOperatorTreeConverter(schema: Schema) {

  val temporaryViewMap = new scala.collection.mutable.HashMap[String, OperatorNode]

  def createScanOperators(sqlTree: SelectStatement) = {
    sqlTree.relations.map(r => {
      val tableName = r match {
        case t: SQLTable => t.name
      }

      temporaryViewMap.contains(tableName) match {
        case true => tableName -> temporaryViewMap(tableName)
        case false =>
          val table = schema.findTable(tableName)
          val scanOpName = table.name + r.asInstanceOf[SQLTable].alias.getOrElse("")
          scanOpName -> ScanOpNode(table, scanOpName, r.asInstanceOf[SQLTable].alias)
      }
    })
  }

  def parseJoinAliases(leftParent: OperatorNode, rightParent: OperatorNode): (String, String) = {
    val leftAlias = leftParent match {
      case c if leftParent.isInstanceOf[ScanOpNode] => leftParent.asInstanceOf[ScanOpNode].qualifier
      case _                                        => Some("")
    }
    val rightAlias = rightParent match {
      case c if rightParent.isInstanceOf[ScanOpNode] => rightParent.asInstanceOf[ScanOpNode].qualifier
      case _                                         => Some("")
    }
    (leftAlias.getOrElse(""), rightAlias.getOrElse(""))
  }

  def parseJoinTree(e: Option[Relation], inputOps: Seq[(String, OperatorNode)]): OperatorNode = e match {
    case None =>
      if (inputOps.size != 1)
        throw new Exception("Error in query: There are multiple input relations but no join! Cannot process such query statement!")
      else inputOps(0)._2
    case Some(joinTree) => joinTree match {
      case j: Join =>
        val leftOp = parseJoinTree(Some(j.left), inputOps)
        val rightOp = parseJoinTree(Some(j.right), inputOps)
        val (leftAlias, rightAlias) = parseJoinAliases(leftOp, rightOp)
        new JoinOpNode(leftOp, rightOp, j.clause, j.tpe, leftAlias, rightAlias)
      case r: SQLTable =>
        inputOps.find(so => so._1 == r.name + r.alias.getOrElse("")) match {
          case Some(t) => t._2
          case None => {
            inputOps.find(so => so._1 == r.name) match {
              case Some(t) => t._2 // TODO -- Is this correct?
              case None    => throw new Exception("LegoBase Frontend BUG: Table referenced in join but neither a Scan or a View operator for this table was not constructed!")
            }
          }
        }
      case sq: Subquery => SubqueryNode(createMainOperatorTree(sq.subquery))
    }
  }

  def parseWhereClauses(e: Option[Expression], parentOp: OperatorNode): OperatorNode = e match {
    case Some(expr) =>
      analyzeExprForSubquery(expr, parentOp, false);
    case None => parentOp
  }

  def getExpressionName(expr: Expression) = {
    expr match {
      case FieldIdent(qualifier, name, _) => qualifier.getOrElse("") + name
      case Year(_)                        => throw new Exception("When YEAR is used in group by it must be given an alias")
      case _                              => throw new Exception("Invalid Group by (Non-single attribute reference) expression " + expr + " found that does not appear in the select statement.")
    }
  }

  def parseGroupBy(gb: Option[GroupBy], proj: Seq[(Expression, Option[String])]) = gb match {
    case Some(GroupBy(exprList)) =>
      exprList.map(gbExpr => proj.find(p => p._1 == gbExpr) match {
        case Some(p) if p._2.isDefined  => (gbExpr, p._2.get)
        case Some(p) if !p._2.isDefined => (gbExpr, getExpressionName(gbExpr))
        case _ => proj.find(p => p._2 == Some(getExpressionName(gbExpr))) match {
          case Some(e) => (e._1, e._2.get)
          case None    => (gbExpr, getExpressionName(gbExpr))
        }
      })
    case None => Seq()
  }

  def parseAggregations(e: Projections, gb: Option[GroupBy], parentOp: OperatorNode): OperatorNode = e match {
    case ExpressionProjections(proj) => {

      val divisionIndexes = scala.collection.mutable.ArrayBuffer[(String, String)]()
      val hasDivide = proj.find(p => p._1.isInstanceOf[Divide]).isDefined

      val projsWithoutDiv = proj.map(p => (p._1 match {
        case Divide(e1, e2) =>
          val e1Name = p._2.getOrElse("")
          val e2Name = p._2.getOrElse("") + "_2"
          divisionIndexes += ((e1Name, e2Name))
          Seq((e1, Some(e1Name)), (e2, Some(e2Name)))
        case _ => Seq((p._1, p._2))
      })).flatten.asInstanceOf[Seq[(Expression, Option[String])]]

      var aggProjs = projsWithoutDiv.filter(p => p._1.isAggregateOpExpr)

      val hasAVG = aggProjs.exists(ap => ap._1.isInstanceOf[Avg])
      if (hasAVG && aggProjs.find(_._1.isInstanceOf[CountAll]) == None)
        aggProjs = aggProjs :+ (CountAll(), Some("__TOTAL_COUNT"))

      if (aggProjs == List()) parentOp
      else {
        val aggNames = aggProjs.map(agg => agg._2 match {
          case Some(al) => al
          case None     => throw new Exception("LegoBase Limitation: All aggregations must be given an alias (aggregation " + agg._1 + " was not)")
        })

        val aggOp = if (hasAVG) {
          val finalAggs = aggProjs.map(ag => ag._1 match {
            case Avg(e) => Sum(e)
            case _      => ag._1
          })

          //val countAllIdx = aggsAliases.indexOf(CountAll())
          val countAllName = aggProjs.find(_._1.isInstanceOf[CountAll]).get._2.get
          val mapIndices = aggProjs.filter(avg => avg._1.isInstanceOf[Avg]).map(avg => { (avg._2.get, countAllName) })
          MapOpNode(AggOpNode(parentOp, finalAggs, parseGroupBy(gb, proj), aggNames), mapIndices)
        } else AggOpNode(parentOp, aggProjs.map(_._1), parseGroupBy(gb, proj), aggNames)

        if (hasDivide) MapOpNode(aggOp, divisionIndexes)
        else aggOp
      }
    }
    case AllColumns() => parentOp
  }

  // TODO -- needs to be generalized and expanded with more cases
  def analyzeExprForSubquery(expr: Expression, parentOp: OperatorNode, isHaving: Boolean): SelectOpNode = expr match {
    case GreaterThan(e, (sq: SelectStatement)) =>
      val rootOp = SubquerySingleResultNode(createMainOperatorTree(sq))
      val rhs = GetSingleResult(rootOp)
      rhs.setTp(typeTag[Double]) // FIXME
      SelectOpNode(parentOp, GreaterThan(e, rhs), isHaving)
    //case GreaterThan(e1, e2) => SelectOpNode(parentOp, GreaterThan(e1, e2), true)
    case LessThan(e, (sq: SelectStatement)) =>
      val rootOp = SubquerySingleResultNode(createMainOperatorTree(sq))
      val rhs = GetSingleResult(rootOp)
      rhs.setTp(typeTag[Double]) // FIXME
      SelectOpNode(parentOp, LessThan(e, rhs), isHaving)
    case And(e1, e2) => {
      // TODO -- Not the best of solutions, but OK for now (this func needs to break into two, one for analysis, one for construction of nodes)
      val left = analyzeExprForSubquery(e1, parentOp, isHaving)
      val right = analyzeExprForSubquery(e2, parentOp, isHaving)
      SelectOpNode(parentOp, And(left.cond, right.cond), isHaving)
    }
    case dflt @ _ =>
      //System.out.println("Do not know how to handle " + dflt + "... Treating it as default..."); 
      SelectOpNode(parentOp, expr, isHaving)
  }

  def parseHaving(having: Option[Having], parentOp: OperatorNode): OperatorNode = {
    having match {
      case Some(Having(expr)) =>
        analyzeExprForSubquery(expr, parentOp, true);
      case None => parentOp
    }
  }

  def parseOrderBy(ob: Option[OrderBy], parentOp: OperatorNode) = ob match {
    case Some(OrderBy(listExpr)) => OrderByNode(parentOp, listExpr)
    case None                    => parentOp
  }

  def createPrintOperator(parent: OperatorNode, e: Projections, limit: Option[Limit]) = {
    val projNames = e match {
      case ExpressionProjections(proj) => proj.map(p => p._2 match {
        case Some(al) => al
        case None => p._1 match {
          case FieldIdent(qualifier, name, _) => qualifier.getOrElse("") + name
          case _ => {
            if (!p._2.isDefined && p._1.isInstanceOf[Aggregation])
              throw new Exception("LegoBase limitation: Aggregates must always be aliased (e.g. SUM(...) AS TOTAL)")
            p._1.toString // TODO -- Not entirely correct if this is an aggregation without alias
          }
        }
      })
      case AllColumns() => Seq()
    }
    new PrintOpNode(parent, projNames, limit match {
      case Some(Limit(num)) => num.toInt
      case None             => -1
    })
  }

  def createMainOperatorTree(sqlTree: SelectStatement): OperatorNode = {
    sqlTree.withs.foreach(w => {
      temporaryViewMap += w.alias -> createMainOperatorTree(w.subquery)
    })

    val inputOps = createScanOperators(sqlTree)
    /* We assume that a normalizer has created a single joinTree
     * from all the input relations specified in the select statement.
     * Thus we can just get the first element in this sequence.
     */
    val hashJoinOp = parseJoinTree(Some(sqlTree.joinTrees.get(0)), inputOps.toSeq)
    val selectOp = parseWhereClauses(sqlTree.where, hashJoinOp)
    val aggOp = parseAggregations(sqlTree.projections, sqlTree.groupBy, selectOp)
    val orderByOp = parseOrderBy(sqlTree.orderBy, aggOp)
    val havingOp = parseHaving(sqlTree.having, orderByOp)
    havingOp
  }

  def convert(sqlTree: SelectStatement) = {
    val topOperator = createMainOperatorTree(sqlTree)
    val printOp = createPrintOperator(topOperator, sqlTree.projections, sqlTree.limit)
    //System.out.println(printOp + "\n\n")
    printOp
  }
}
