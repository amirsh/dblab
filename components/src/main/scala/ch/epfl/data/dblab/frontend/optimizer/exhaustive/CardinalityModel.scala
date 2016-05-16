package ch.epfl.data
package dblab
package frontend
package optimizer
package exhaustive

import scala.collection.immutable.List

/**
 * Contains routines to estimate cardinality and selectivity values.
 * TODO: Currently some overlap with Statistics - consider using
 * Statistics class for lookup only.
 *
 * @author Immanuel Trummer
 */
class CardinalityModel {
  /**
   * Returns true iff the predicate can be evaluated on the result of the join between input relations.
   */
  def canEvaluate(leftRelation: RelationInfo, rightRelation: RelationInfo, predicate: Predicate): Boolean = {
    (predicate.refersToTables & (leftRelation.tableIndices | rightRelation.tableIndices)).equals(predicate.refersToTables)
  }
  /**
   * Returns true iff evaluating the predicate requires at least having joined both input relations (and potentially more).
   */
  def evaluationRequiresBoth(leftRelation: RelationInfo, rightRelation: RelationInfo, predicate: Predicate): Boolean = {
    (!(predicate.refersToTables & leftRelation.tableIndices).isEmpty) &&
      (!(predicate.refersToTables & rightRelation.tableIndices).isEmpty)
  }
  /**
   * Estimates cardinality (number of rows) resulting from join between two relations.
   */
  def joinCardinality(leftRelation: RelationInfo, rightRelation: RelationInfo, predicates: List[Predicate]): Double = {
    // Take into account cardinality of join operands
    var cardinality = leftRelation.cardinality * rightRelation.cardinality
    // Take into account predicates that can be evaluated for the first time on join result
    for (predicate <- predicates) {
      // Check whether predicate can be evaluated and not before
      if (canEvaluate(leftRelation, rightRelation, predicate) && evaluationRequiresBoth(leftRelation, rightRelation, predicate)) {
        cardinality *= predicate.selectivity
      }
    }
    cardinality
  }
}