package ch.epfl.data
package dblab.legobase
package frontend

object OperatorUtils {
  var printDepth = 0;
  def printIdent = " " * (printDepth * 6)

  def stringify(op: Any, preamble: String = "") = {
    printDepth += 1
    val res = "\n" + printIdent + "|--> " + preamble + op.toString
    printDepth -= 1
    res
  }
}
