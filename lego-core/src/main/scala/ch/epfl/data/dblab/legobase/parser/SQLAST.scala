package ch.epfl.data
package dblab.legobase
package parser

/**
 * AST for SQL select statement.
 * Based on: https://github.com/stephentu/scala-sql-parser
 */

abstract trait Node
case class SelectStatement(projections: Projections,
                           relations: Seq[Relation],
                           where: Option[Expression],
                           groupBy: Option[GroupBy],
                           orderBy: Option[OrderBy],
                           limit: Option[Limit]) extends Node with Expression {
  def gatherFields = Seq.empty // TODO: not sure about that
}

abstract trait Projections extends Node
case class ExpressionProjections(lst: Seq[(Expression, Option[String])]) extends Projections
case class AllColumns() extends Projections

abstract trait Expression extends Node {
  def isLiteral: Boolean = false

  // is the r-value of this expression a literal?
  def isRValueLiteral: Boolean = isLiteral

  // (col, true if aggregate context false otherwise)
  // only gathers fields within this context (
  // wont traverse into subselects )
  def gatherFields: Seq[(FieldIdent, Boolean)]
}

abstract trait BinaryOperator extends Expression {
  val left: Expression
  val right: Expression

  override def isLiteral = left.isLiteral && right.isLiteral
  def gatherFields = left.gatherFields ++ right.gatherFields
}
case class Or(left: Expression, right: Expression) extends BinaryOperator
case class And(left: Expression, right: Expression) extends BinaryOperator

abstract trait EqualityOperator extends BinaryOperator
case class Equals(left: Expression, right: Expression) extends EqualityOperator
case class NotEquals(left: Expression, right: Expression) extends EqualityOperator

abstract trait InEqualityOperator extends BinaryOperator
case class LessOrEqual(left: Expression, right: Expression) extends InEqualityOperator
case class LessThan(left: Expression, right: Expression) extends InEqualityOperator
case class GreaterOrEqual(left: Expression, right: Expression) extends InEqualityOperator
case class GreaterThan(left: Expression, right: Expression) extends InEqualityOperator
case class In(elem: Expression, set: Seq[Expression], negate: Boolean) extends Expression {
  override def isLiteral =
    elem.isLiteral && set.filter(e => !e.isLiteral).isEmpty
  def gatherFields =
    elem.gatherFields ++ set.flatMap(_.gatherFields)
}
case class Like(left: Expression, right: Expression, negate: Boolean) extends BinaryOperator
case class Add(left: Expression, right: Expression) extends BinaryOperator
case class Subtract(left: Expression, right: Expression) extends BinaryOperator
case class Multiply(left: Expression, right: Expression) extends BinaryOperator
case class Divide(left: Expression, right: Expression) extends BinaryOperator

abstract trait UnaryOperation extends Expression {
  val expr: Expression
  override def isLiteral = expr.isLiteral
  def gatherFields = expr.gatherFields
}
case class Not(expr: Expression) extends UnaryOperation
case class UnaryPlus(expr: Expression) extends UnaryOperation
case class UnaryMinus(expr: Expression) extends UnaryOperation
case class Exists(select: SelectStatement) extends Expression {
  def gatherFields = Seq.empty
}

case class FieldIdent(qualifier: Option[String], name: String, symbol: Symbol = null) extends Expression {
  def gatherFields = Seq((this, false))
}

abstract trait Aggregation extends Expression
case class CountAll() extends Aggregation {
  def gatherFields = Seq.empty
}
case class CountExpr(expr: Expression) extends Aggregation {
  def gatherFields = expr.gatherFields.map(_.copy(_2 = true))
}
case class Sum(expr: Expression) extends Aggregation {
  def gatherFields = expr.gatherFields.map(_.copy(_2 = true))
}
case class Avg(expr: Expression) extends Aggregation {
  def gatherFields = expr.gatherFields.map(_.copy(_2 = true))
}
case class Min(expr: Expression) extends Aggregation {
  def gatherFields = expr.gatherFields.map(_.copy(_2 = true))
}
case class Max(expr: Expression) extends Aggregation {
  def gatherFields = expr.gatherFields.map(_.copy(_2 = true))
}

abstract trait Function extends Expression
case class Extract(what: ExtractType, from: Expression) extends Function {
  def gatherFields = from.gatherFields
}

abstract trait LiteralExpression extends Expression {
  override def isLiteral = true
  def gatherFields = Seq.empty
}
case class IntLiteral(v: Long) extends LiteralExpression
case class FloatLiteral(v: Double) extends LiteralExpression
case class StringLiteral(v: String) extends LiteralExpression
case class NullLiteral() extends LiteralExpression
case class DateLiteral(d: String) extends LiteralExpression

abstract trait Relation extends Node
case class Table(name: String, alias: Option[String]) extends Relation
case class Subquery(subquery: SelectStatement, alias: String) extends Relation

sealed abstract trait JoinType
case object InnerJoin extends JoinType
case object LeftOuterJoin extends JoinType
case object RightOuterJoin extends JoinType
case object FullOuterJoin extends JoinType

case class Join(left: Relation, right: Relation, tpe: JoinType, clause: Expression) extends Relation

sealed abstract trait OrderType
case object ASC extends OrderType
case object DESC extends OrderType

case class GroupBy(keys: Seq[Expression], having: Option[Expression]) extends Node
case class OrderBy(keys: Seq[(Expression, OrderType)]) extends Node
case class Limit(rows: Long) extends Node

sealed abstract trait ExtractType
case object YEAR extends ExtractType
case object MONTH extends ExtractType
case object DAY extends ExtractType