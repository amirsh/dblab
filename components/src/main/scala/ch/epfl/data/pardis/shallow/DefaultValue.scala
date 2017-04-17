package ch.epfl.data.sc
package pardis
package shallow
package utils

object DefaultValue {
  def apply(n: String) = n match {
    case "boolean" | "Boolean" => false
    case "byte" | "Byte" => (0: Byte)
    case "short" | "Short" => (0: Short)
    case "char" | "Char" => '\u0000'
    case "java.lang.Character" => '\u0000'
    case "int" | "Int" => 0
    case "long" | "Long" => 0L
    case "float" | "Float" => 0.0F
    case "double" | "Double" => 0.0
    case "ch.epfl.data.sc.pardis.shallow.OptimalString" | "OptimalString" => OptimalString.default
    case arr if arr.startsWith("Array[") => null
    case dflt @ _ => null //throw new Exception("Unsupported type: " + dflt)
  }
}
