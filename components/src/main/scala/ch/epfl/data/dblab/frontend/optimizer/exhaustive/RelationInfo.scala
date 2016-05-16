package ch.epfl.data
package dblab
package frontend
package optimizer
package exhaustive

import scala.collection.mutable.BitSet
import scala.collection.immutable.List

/**
 * A relation is an intermediate result that can occur during the
 * processing of an Select-Project-Join sub-query of an input query.
 * A relation is characterized by a set of base tables; we assume
 * that selections and projections are pushed down so the set of
 * joined tables decides - for a given query - implicitly the
 * set of predicates and projections that have been applied.
 * The RelationInfo object contains statistics about the
 * relation that are used for cost estimation by the optimizer.
 *
 * @author Immanuel Trummmer
 */
class RelationInfo(val tableIndices: BitSet, val cardinality: Double, val bytesPerRow: Int) {
  /**
   * A list of access paths that are optimal by their combination of execution cost
   * and output properties (e.g., a path may be kept even if it is more expensive than
   * other paths for this relation if it generates output tuples in an order that might
   * speed up future operations).
   */
  var optimalPaths = List[Path]()
  /**
   * Returns new RelationInfo object representing a join between this relation
   * and another relation.
   */
  def joinWith(otherRel: RelationInfo): RelationInfo = {
    val resultIndices = tableIndices | otherRel.tableIndices
    val resultCardinality = cardinality * otherRel.cardinality
    val resultBytesPerRow = bytesPerRow + otherRel.bytesPerRow
    new RelationInfo(resultIndices, resultCardinality, resultBytesPerRow)
  }
}