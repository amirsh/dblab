package ch.epfl.data.sc
package pardis
package shallow

class OptimalString(val data: Array[Byte]) {
  override def hashCode(): Int = data.foldLeft(0)((sum, e) => sum + e)
  override def equals(o: Any): Boolean = {
    val arr2 = o.asInstanceOf[OptimalString]
    data.sameElements(arr2.data)
  }
  def apply(i: Int): Byte = data(i)
  def startsWith(o: OptimalString): Boolean = data.startsWith(o.data)
  def containsSlice(o: OptimalString): Boolean = data.containsSlice(o.data)
  def endsWith(o: OptimalString): Boolean = data.endsWith(o.data)
  def slice(start: Int, end: Int): OptimalString = OptimalString(data.slice(start, end))
  def indexOfSlice(o: OptimalString, i: Int): Int = data.indexOfSlice(o.data, i)
  def diff(o: OptimalString): Int = {
    val l1 = data.length
    val l2 = o.data.length
    val lmin = math.min(l1, l2)
    var finish = false
    var res = 0
    var i = 0
    while (!finish && i < lmin) {
      val d = data(i) - o.data(i)
      if (d != 0) {
        res = d
        finish = true
      }
      i += 1
    }
    if (res == 0) {
      l1 - l2
    } else {
      res
    }
  }
  def compare(o: OptimalString): Int = if (data.sameElements(o.data)) 0 else 1
  def ===(o: OptimalString): Boolean = compare(o) == 0
  def =!=(o: OptimalString): Boolean = compare(o) == 1
  def +(o: Any): OptimalString = ??? /* Not used by the shallow implementation */
  def length: Int = data.length
  def string: String = new String(data.map(_.toChar))
  def zip(o: OptimalString) = data.zip(o.data)
  def foldLeft(c: Int)(f: (Int, Byte) => Int): Int = data.foldLeft(c)(f)
  def reverse(): OptimalString = OptimalString(data.reverse)
  def split(delimiter: Array[Char]): Array[OptimalString] = {
    val str = new String(data.map(_.toChar))
    val res = str.split(delimiter)
    res.map(s => OptimalString(s.getBytes))
  }
  override def toString = string
}

object OptimalString {
  def apply(data: Array[Byte]): OptimalString = new OptimalString(data)
  def default = apply("".getBytes)
}
