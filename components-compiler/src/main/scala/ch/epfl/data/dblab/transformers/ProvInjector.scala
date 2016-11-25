package ch.epfl.data
package dblab
package transformers

import scala.language.implicitConversions
import sc.pardis.ir._
import deep.dsls.QueryEngineExp
import reflect.runtime.universe.{ TypeTag, Type }
import sc.pardis.optimization._
import deep._
import sc.pardis.types._
import sc.pardis.types.PardisTypeImplicits._
import sc.pardis.quasi.anf._
import quasi._

class ProvInjector(override val IR: QueryEngineExp)
  extends RuleBasedTransformer[QueryEngineExp](IR) {
  // import IR._

  rewrite += rule {
    case dsl"""(
                if($cond) 
                  $thenp 
                else 
                  $elsep
               ): Unit""" =>
      dsl"""(
                if($cond) {
                  printf("cf -- true")
                  ${inlineBlock[Unit](thenp)}
                }
                else {
                  printf("cf -- false")
                  ${inlineBlock[Unit](elsep)}
                }
               )"""

  }

  rewrite += rule {
    case dsl"while($cond) $body" =>
      dsl"""while(${inlineBlock(cond)}) {
        printf("cf(while) -- true")
        ${inlineBlock(body)}
      }
      printf("cf(while) -- false")
      """
  }
}
