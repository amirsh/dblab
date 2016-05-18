package ch.epfl.data
package dblab
package frontend
package optimizer
package exhaustive

import schema._
import parser.OperatorAST._
import scala.collection.immutable.List
import scala.collection.mutable.HashMap
import scala.collection.mutable.BitSet
import scala.collection.mutable.ArrayBuffer

/**
 * Query optimizer that implements a variant of the classical
 * dynamic programming algorithm by Selinger.
 *
 * @author Immanuel Trummer
 */
class QueryPlanDPoptimizer extends QueryPlanOptimizer {
  /**
   * Compares a new path for generating a relation against
   * the previously known paths, removes dominated paths
   * in that relation's list of optimal paths, and inserts
   * new path unless it is dominated.
   */
  def prune(resultRelation: RelationInfo, newPath: Path) {
    // Check if new path is dominated by an old path
    if (!resultRelation.optimalPaths.exists(
      (oldPath: Path) => oldPath.dominates(newPath))) {
      // Remove previously generated paths that are dominated
      resultRelation.optimalPaths = resultRelation.optimalPaths.filterNot(
        (oldPath: Path) => newPath.dominates(oldPath))
      // Insert new path
      resultRelation.optimalPaths = newPath :: resultRelation.optimalPaths
    }
  }
  /**
   * For two given join operands, iterate over all possible
   * combinations of access paths and all join methods,
   * generate the corresponding paths and prune. Insert
   * new result relations into relation hash map if necessary.
   */
  def tryJoins(leftRelation: RelationInfo, rightRelation: RelationInfo,
               nrJoined: Int, relationsByNrJoined: Array[HashMap[BitSet, RelationInfo]],
               predicates: List[Predicate]) {
    // Obtain result relation and generate if not yet created
    val joinResultTables = leftRelation.tableIndices | rightRelation.tableIndices
    if (!relationsByNrJoined(nrJoined).contains(joinResultTables)) {
      val resultRelation = leftRelation.joinWith(rightRelation, predicates)
      relationsByNrJoined(nrJoined).put(joinResultTables, resultRelation)
    }
    val resultRelation = relationsByNrJoined(nrJoined).getOrElse(joinResultTables, null)
    // Iterate over optimal paths for generating left join operand
    for (leftPath <- leftRelation.optimalPaths) {
      // Iterate over optimal paths for generating right join operand
      for (rightPath <- rightRelation.optimalPaths) {
        // TODO: currently, only one join method is taken into account
        // Generate new path and prune with previously generated paths for same relation
        val resultPath = new JoinPath(resultRelation, leftPath, rightPath)
        // TODO: invocation of cost model
        prune(resultRelation, resultPath)
      }
    }
  }
  /**
   * Figures out the optimal order to join the given list
   * of relations and returns the path representing the optimal
   * order. This function is used as sub-function by the
   * optimizer to optimize SPJ parts of an input query plan.
   */
  def optimizeJoinOrder(relationsToJoin: List[RelationInfo],
                        predicates: List[Predicate]): Path = {
    // We need to join all input relations
    val nrJoinItems = relationsToJoin.size
    // Orders relations by number of joined items - for a fixed number,
    // it maps the index representing joined tables to the associated relation.
    val relationsByNrJoined = new Array[HashMap[BitSet, RelationInfo]](nrJoinItems + 1)
    // Add relations to join to relation index
    relationsByNrJoined(1) = HashMap()
    for (relation <- relationsToJoin) {
      val tableIndices = relation.tableIndices
      relationsByNrJoined(1).put(tableIndices, relation)
    }
    // Iterate over the number of joined items - in each iteration,
    // generate all relations joining that many items and try out
    // all possibilities (i.e., join order and operators) to obtain
    // those relations.
    for (nrJoined <- 2 until nrJoinItems) {
      // We generate paths joining nrJoined items in this iteration.
      val resultRelations = relationsByNrJoined(nrJoined)
      // Iterate over cardinality of left join operand.
      for (nrJoinedLeft <- 1 until nrJoined - 1) {
        // Number of joined items in left and right operand need to
        // sum up to nrJoined.
        val nrJoinedRight = nrJoined - nrJoinedLeft;
        // Iterate over left join operand
        for ((leftTables, leftRelation) <- relationsByNrJoined(nrJoinedLeft)) {
          // Iterate over right join operand
          for ((rightTables, rightRelation) <- relationsByNrJoined(nrJoinedRight)) {
            // Join operand pair is only admissible if tables do not overlap
            if (leftTables.intersect(rightTables).isEmpty) {
              // Iterate over all possible join methods and paths and prune
              tryJoins(leftRelation, rightRelation, nrJoined, relationsByNrJoined, predicates)
            }
          }
        }
      }
    }
    // TODO: Clean up (take care of cyclic references)
    // Return best path for final relation
    relationsByNrJoined(nrJoinItems).head._2.optimalPaths.head
  }

  def optimize(qp: QueryPlanTree): QueryPlanTree = {
    // Split query tree into SPJ sub-queries whose join order is optimized independently
    // Optimize single sub-queries using dynamic programming
    // Construct optimized global query plan by combining sub-queries
    qp
  }
}