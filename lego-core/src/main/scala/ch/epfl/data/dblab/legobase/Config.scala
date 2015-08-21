package ch.epfl.data
package dblab.legobase

/**
 * A module containing configurations for running queries.
 */
object Config {
  /** Specifies if the correctness of the results should be checked or not. */
  var checkResults = true
  /** Specifies to location of data files. */
  var datapath: java.lang.String = null
  /** Specifies the scaling factor for TPCH queries (TODO should be removed) */
  var sf: Double = _
  /** Number of the repititions of running a query */
  val numRuns: scala.Int = 1
  /** Specifies whether to obtain statistics during schema definition */
  val gatherStats: Boolean = false
  /** Specifies whether to show information about the query plan generation of LegoBase during execution */
  val debugQueryPlan: Boolean = false

  /* Code generation info */
  sealed trait CodeGenerationLang
  case object CCodeGeneration extends CodeGenerationLang
  case object ScalaCodeGeneration extends CodeGenerationLang
  var codeGenLang: CodeGenerationLang = CCodeGeneration
}
