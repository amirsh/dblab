/* Generated by AutoLifter, EPFL DATA 2014 */

package ch.epfl.data
package legobase
package deep
package scalalib

import pardis.ir._

trait ArrayOps extends Base { this: DeepDSL =>
  implicit class ArrayRep[T](self: Rep[Array[T]])(implicit manifestT: Manifest[T]) {
    def length(): Rep[Int] = arrayLength[T](self)(manifestT)
    def apply(i: Rep[Int]): Rep[T] = arrayApply[T](self, i)(manifestT)
    def update(i: Rep[Int], x: Rep[T]): Rep[Unit] = arrayUpdate[T](self, i, x)(manifestT)
    override def clone(): Rep[Array[T]] = arrayClone[T](self)(manifestT)
  }
  // case classes
  case class ArrayNew[T](_length: Rep[Int])(implicit manifestT: Manifest[T]) extends FunctionDef[Array[T]](None, "new Array", List(List(_length)))
  case class ArrayLength[T](self: Rep[Array[T]])(implicit manifestT: Manifest[T]) extends FunctionDef[Int](Some(self), "length", List())
  case class ArrayApply[T](self: Rep[Array[T]], i: Rep[Int])(implicit manifestT: Manifest[T]) extends FunctionDef[T](Some(self), "apply", List(List(i)))
  case class ArrayUpdate[T](self: Rep[Array[T]], i: Rep[Int], x: Rep[T])(implicit manifestT: Manifest[T]) extends FunctionDef[Unit](Some(self), "update", List(List(i, x)))
  case class ArrayClone[T](self: Rep[Array[T]])(implicit manifestT: Manifest[T]) extends FunctionDef[Array[T]](Some(self), "clone", List())
  // method definitions
  def arrayNew[T](_length: Rep[Int])(implicit manifestT: Manifest[T]): Rep[Array[T]] = ArrayNew[T](_length)
  def arrayLength[T](self: Rep[Array[T]])(implicit manifestT: Manifest[T]): Rep[Int] = ArrayLength[T](self)
  def arrayApply[T](self: Rep[Array[T]], i: Rep[Int])(implicit manifestT: Manifest[T]): Rep[T] = ArrayApply[T](self, i)
  def arrayUpdate[T](self: Rep[Array[T]], i: Rep[Int], x: Rep[T])(implicit manifestT: Manifest[T]): Rep[Unit] = ArrayUpdate[T](self, i, x)
  def arrayClone[T](self: Rep[Array[T]])(implicit manifestT: Manifest[T]): Rep[Array[T]] = ArrayClone[T](self)
  type Array[T] = scala.Array[T]
}
trait ArrayImplicits { this: ArrayComponent =>
  // Add implicit conversions here!
}
trait ArrayComponent extends ArrayOps with ArrayImplicits { self: DeepDSL => }

