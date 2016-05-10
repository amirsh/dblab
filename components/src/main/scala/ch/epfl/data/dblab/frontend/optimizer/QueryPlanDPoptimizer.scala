package ch.epfl.data
package dblab
package frontend
package optimizer

import schema._
import parser._
import parser.OperatorAST._
import scala.collection.mutable.ArrayBuffer

/**
 * Query optimizer that implements a variant of the classical
 * dynamic programming algorithm by Selinger.
 *
 * @author Immanuel Trummer
 */
class QueryPlanDPoptimizer extends QueryPlanOptimizer {

  def optimize(qp: QueryPlanTree): QueryPlanTree = {
  	// Split query tree into SPJ sub-queries whose join order is optimized independently
  	// Optimize single sub-queries using dynamic programming
  	// Construct optimized global query plan by combining sub-queries
    qp
  }
}