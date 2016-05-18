package ch.epfl.data
package dblab
package frontend
package optimizer
package exhaustive

/**
 * Contains routines to estimate path execution cost according
 * to a simple model currently.
 *
 * @author Immanuel Trummer
 */
object CostModel {
  /**
   * Returns the aggregated execution cost of a path
   * joining the result of the two input paths.
   */
  def joinPathCost(joinResult: RelationInfo, leftPath: Path, rightPath: Path): Double = {
    leftPath.cost + rightPath.cost + joinResult.cardinality
  }
}