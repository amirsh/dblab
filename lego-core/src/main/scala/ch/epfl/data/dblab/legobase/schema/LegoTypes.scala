package ch.epfl.data
package dblab.legobase
package schema

import sc.pardis.types._
import scala.reflect.runtime.universe.{ TypeTag, typeTag => tag, Type }

case object DateType extends PardisType[java.util.Date] {
  def rebuild(newArguments: PardisType[_]*) = DateType
  val name = "java.util.Date"
  val typeArguments = Nil
  val typeTag = tag[java.util.Date]
}

case class VarCharType(maxLength: Int) extends PardisType[String] {
  def rebuild(newArguments: PardisType[_]*) = VarCharType(maxLength)
  val name = "String"
  val typeArguments = Nil
  val typeTag = tag[String]
}

case class TableType(schema: Schema, table: Table) extends PardisType[Table] {
  def rebuild(newArguments: PardisType[_]*): PardisType[_] = new TableType(schema, table)
  val name = table.name
  val typeArguments = Nil
  override val isRecord = true
  val typeTag = throw new Exception("No type tag available for a TableType type representation.")
}

case object TpeType extends PardisType[Tpe] {
  def rebuild(newArguments: PardisType[_]*) = TpeType
  val name = "Tpe"
  val typeArguments = Nil
  val typeTag = tag[Tpe]
}
