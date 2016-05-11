package ch.epfl.data
package dblab
package frontend
package optimizer
package exhaustive

import scala.collection.mutable.BitSet

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
case class RelationInfo(val tableIndices: BitSet, val cardinality: Double, val bytesPerRow: Int)