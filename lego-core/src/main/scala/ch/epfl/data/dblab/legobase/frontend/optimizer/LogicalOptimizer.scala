package ch.epfl.data
package dblab.legobase
package frontend
package optimizer

import schema._
import ast._
import sc.pardis.rules._
import sc.pardis.ast.{ Node => PardisASTNode, _ }

class LogicalOptimizer(schema: Schema) extends Optimizer {
  object PushUpSelection extends Rule("push-up-selection") {
    val utils = new NaiveOptimizer(schema)
    def getTables(opNode: OperatorNode): Seq[Table] =
      opNode.toList.collect { case ScanOpNode(table, _, _) => table }
    def extractCondition(cond: Expression, opNode: OperatorNode): Option[Expression] = cond match {
      case And(l, r) => (extractCondition(l, opNode), extractCondition(r, opNode)) match {
        case (Some(lv), Some(rv)) => Some(And(lv, rv))
        case (Some(lv), None)     => Some(lv)
        case (None, Some(rv))     => Some(rv)
        case _                    => None
      }
      case Or(_, _) => ???
      case _ if utils.isPrimitiveExpression(cond) =>
        val fi = utils.processPrimitiveExpression(cond)
        val so = utils.findScanOpForFieldIdent(opNode.toList, fi)
        so.map(x => cond)
    }
    def generate(node: PardisASTNode): Option[PardisASTNode] = {
      node match {
        case SelectOpNode(parent, cond, false) if utils.isPrimitiveExpression(cond) =>
          parent match {
            case JoinOpNode(l, r, x, y, z, t) if extractCondition(cond, l).nonEmpty ||
              extractCondition(cond, r).nonEmpty =>
              def rcr(node: OperatorNode): OperatorNode = extractCondition(cond, node) match {
                case Some(v) => SelectOpNode(node, v, false)
                case None    => node
              }
              Some(JoinOpNode(rcr(l), rcr(r), x, y, z, t))
            case ScanOpNode(_, _, _) => None
            case _                   => Some(parent.recreate(List(SelectOpNode(parent.children(0), cond, false))))
          }
        case _ => None
      }
      // val child = node.children.withIndex.collect({
      //   case (SelectOpNode(parent, cond, false), index) =>

      // })
    }
  }

  def optimize(tree: OperatorNode): OperatorNode = {
    val tr = new RuleBasedTransformationRules {
      val definedRules: List[Rule] = List(PushUpSelection)
    }
    var result = tree
    var rounds = 0
    def fixPoint(): Unit =
      tr.generate(result) match {
        case (x: OperatorNode) :: xs =>
          result = x
          rounds += 1
          fixPoint()
        case _ =>
          ()
      }
    // System.out.println(tr.generate(tree))

    fixPoint()
    System.out.println(s"Done after $rounds rounds!")
    // operatorList = tree.toList
    // optimizeNode(tree)
    result
  }
}
