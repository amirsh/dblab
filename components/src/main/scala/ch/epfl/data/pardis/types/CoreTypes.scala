package ch.epfl.data.sc
package pardis
package types

trait Tpe

abstract class PardisType[T] extends Tpe {
  def rebuild(newArguments: PardisType[_]*): PardisType[_]

  val name: String

  val typeArguments: List[PardisType[_]]

  // val typeTag: TypeTag[T]

  // def tpe: Type = typeTag.tpe

  // TODO can we simplify this API?
  val isArray: Boolean = false
  val isFunction: Boolean = false
  val isOption: Boolean = false
  val isVariable: Boolean = false
  val isPrimitive: Boolean = false
  def isRecord: Boolean = false
}

case object IntType extends PardisType[Int] {
  def rebuild(newArguments: PardisType[_]*) = IntType
  val name = "Int"
  val typeArguments = Nil
  // val typeTag = tag[Int]
  override val isPrimitive = true
}

case object BooleanType extends PardisType[Boolean] {
  def rebuild(newArguments: PardisType[_]*) = BooleanType
  val name = "Boolean"
  val typeArguments = Nil
  // val typeTag = tag[Boolean]
  override val isPrimitive = true
}

case object ByteType extends PardisType[Byte] {
  def rebuild(newArguments: PardisType[_]*) = ByteType
  val name = "Byte"
  val typeArguments = Nil
  // val typeTag = tag[Byte]
  override val isPrimitive = true
}

case object CharType extends PardisType[Char] {
  def rebuild(newArguments: PardisType[_]*) = CharType
  val name = "Char"
  val typeArguments = Nil
  // val typeTag = tag[Char]
  override val isPrimitive = true
}

case object CharacterType extends PardisType[Character] {
  def rebuild(newArguments: PardisType[_]*) = CharacterType
  val name = "Character"
  val typeArguments = Nil
  // val typeTag = tag[Character]
  override val isPrimitive = true
}

case object FloatType extends PardisType[Float] {
  def rebuild(newArguments: PardisType[_]*) = FloatType
  val name = "Float"
  val typeArguments = Nil
  // val typeTag = tag[Float]
  override val isPrimitive = true
}

case object DoubleType extends PardisType[Double] {
  def rebuild(newArguments: PardisType[_]*) = DoubleType
  val name = "Double"
  val typeArguments = Nil
  // val typeTag = tag[Double]
  override val isPrimitive = true
}

case object LongType extends PardisType[Long] {
  def rebuild(newArguments: PardisType[_]*) = LongType
  val name = "Long"
  val typeArguments = Nil
  // val typeTag = tag[Long]
  override val isPrimitive = true
}

case object StringType extends PardisType[String] {
  def rebuild(newArguments: PardisType[_]*) = StringType
  val name = "String"
  val typeArguments = Nil
  // val typeTag = tag[String]
  override val isPrimitive = true
}

case object ShortType extends PardisType[Short] {
  def rebuild(newArguments: PardisType[_]*) = ShortType
  val name = "Short"
  val typeArguments = Nil
  // val typeTag = tag[Short]
  override val isPrimitive = true
}

case class SeqType[T](elementType: PardisType[T]) extends PardisType[Seq[T]] {
  def rebuild(newArguments: PardisType[_]*) = SeqType(newArguments(0))
  // private implicit val elementTag = elementType.typeTag

  val name = s"Seq[${elementType.name}]"
  val typeArguments = List(elementType)
  // val typeTag = tag[Seq[T]]
}

case class ArrayType[T](elementType: PardisType[T]) extends PardisType[Array[T]] {
  def rebuild(newArguments: PardisType[_]*) = ArrayType(newArguments(0))
  // private implicit val elementTag = elementType.typeTag

  val name = s"Array[${elementType.name}]"
  val typeArguments = List(elementType)
  // val typeTag = tag[Array[T]]
  override val isArray = true
}

case class OptionType[T](elementType: PardisType[T]) extends PardisType[Option[T]] {
  def rebuild(newArguments: PardisType[_]*) = OptionType(newArguments(0))
  // private implicit val elementTag = elementType.typeTag

  val name = s"Option[${elementType.name}]"
  val typeArguments = List(elementType)
  // val typeTag = tag[Option[T]]
}

case class OrderingType[A](innerType: PardisType[A]) extends PardisType[Ordering[A]] {
  def rebuild(newArguments: PardisType[_]*) = OrderingType(newArguments(0))
  // private implicit val innerTag = innerType.typeTag
  val name = "Ordering[${innerType.name}]"
  val typeArguments = List(innerType)
  // val typeTag = tag[Ordering[A]]
}

case class ManifestType[A](innerType: PardisType[A]) extends PardisType[Manifest[A]] {
  def rebuild(newArguments: PardisType[_]*) = new ManifestType(newArguments(0))
  // private implicit val innerTag = innerType.typeTag
  val name = "Manifest[${innerType.name}]"
  val typeArguments = List(innerType)
  // val typeTag = tag[Manifest[A]]
}
