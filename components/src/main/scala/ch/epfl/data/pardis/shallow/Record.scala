package ch.epfl.data.sc
package pardis
package shallow

import pardis.shallow.utils.DefaultValue
import scala.language.experimental.macros

trait Record {
  def getField(key: String): Option[Any]
}

object Record {
  /* Reflection-based default handler */
  def getDefaultRecord[T <: Record: Manifest](): T = {
    val values = manifest[T].runtimeClass.getDeclaredFields().map(x => DefaultValue(x.getType.getName))
    manifest[T].runtimeClass.getConstructors()(0).newInstance(values.toSeq.asInstanceOf[Seq[Object]]: _*).asInstanceOf[T]
  }

  def getFieldsString(rec: Record): List[String] = rec match {
    case l: DynamicCompositeRecord[_, _] => getFieldsString(l.leftRecord) ++ getFieldsString(l.rightRecord)
    case p: Product                      => p.productIterator.map(_.toString).toList
    case _                               => throw new Exception(s"Does not know how to extract fields for $rec")
  }
}

class RecordOps[T1 <: Record](self: T1) {
  def concatenateDynamic[T2 <: Record](record2: T2, leftAlias: String = "", rightAlias: String = ""): DynamicCompositeRecord[T1, T2] = new DynamicCompositeRecord(self, record2, leftAlias, rightAlias)
}

trait CaseClassRecord extends Record {
  def getField(key: String): Option[Any] = {
    try {
      val field = this.getClass.getDeclaredField(key)
      field.setAccessible(true)
      Some(field.get(this))
    } catch {
      case noSuchField: java.lang.NoSuchFieldException => None
    }
  }
}
