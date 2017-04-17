package ch.epfl.data.sc
package pardis

import scala.language.implicitConversions

package object shallow {
  implicit def RecordOps[T1 <: Record](self: T1) = new RecordOps(self)
}
