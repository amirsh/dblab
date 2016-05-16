package ch.epfl.data
package dblab
package frontend
package optimizer
package exhaustive

import scala.collection.mutable.BitSet

/**
 * Represents a query predicate (element of the WHERE clause). Contains
 * information that is used for cardinality estimation while optimizing.
 *
 * @author Immanuel Trummer
 */
class Predicate(val refersToTables: BitSet, val selectivity: Double) {
}