package ch.epfl.data
package dblab.legobase

import schema._
import frontend._
import frontend.optimizer._
import frontend.normalizer._
import utils.Utilities._
import java.io.PrintStream
import ch.epfl.data.dblab.legobase.frontend.OperatorAST._

/**
 * The common trait for all Query Runners (either a Query Interpreter or a Query Compiler)
 */
trait LegoRunner {
  var currQuery: java.lang.String = ""
  var queryName: java.lang.String = ""
  Config.checkResults = true

  def getOutputName = queryName + "Output.txt"

  /*
   * This method should be implemented by a query interpreter to interpret the given
   * query or by a query compiler to compile the given query.
   *
   * @param queryPlan -- the query plan to be executed
   */
  def executeQuery(queryPlan: OperatorNode, schema: Schema): Unit

  /**
   * The starting point of a query runner which uses the arguments as its setting.
   *
   * @param args the setting arguments passed through command line
   */
  def run(args: Array[String]) {
    // Set the folder containing data
    Config.datapath = args(0);
    val dataFolder = new java.io.File(Config.datapath)
    if (!dataFolder.exists || !dataFolder.isDirectory) {
      println("Data folder " + Config.datapath + " does not exist or is not a directory. Cannot proceed");
      return
    }

    val filesToExecute = args.tail.map(arg => {
      val f = new java.io.File(arg)
      if (!f.exists) {
        println("Warning: Command line parameter " + f + " is not a file or directory. Skipping this argument...")
        List()
      } else if (f.isDirectory) f.listFiles.map(arg + "/" + _.getName).toList
      else List(arg)
    }).flatten.groupBy(f => f.substring(f.lastIndexOf('.'), f.length))

    // TODO -- Ideally, the following should not be dependant on the file extension, but OK for now.
    for (f <- (filesToExecute.get(".ddl") ++ filesToExecute.get(".ri")).flatten.toList) {
      System.out.println("Executing file " + f)
      val ddlDefStr = scala.io.Source.fromFile(f).mkString
      val ddlObj = DDLParser.parse(ddlDefStr)
      DDLInterpreter.interpret(ddlObj)
    }
    //System.out.println(DDLInterpreter.getCurrSchema)

    // TODO -- That must be calculated as well in DDLInterpreter
    if (Config.gatherStats) {
      DDLInterpreter.getCurrSchema.stats += "NUM_YEARS_ALL_DATES" -> 7
      System.out.println(DDLInterpreter.getCurrSchema.stats.mkString("\n"))
    }

    // Now run all queries specified
    val schema = DDLInterpreter.getCurrSchema
    val ejNorm = new EquiJoinNormalizer(schema)
    for (q <- filesToExecute.get(".sql").toList.flatten) {
      currQuery = q
      queryName = q.substring(q.lastIndexOf('/') + 1, q.length).replace(".sql", "")
      println("Executing file " + q + " (queryName = " + queryName + ")")

      Console.withOut(new PrintStream(getOutputName)) {
        //executeQuery(currQuery, schema)
        val qStmt = SQLParser.parse(scala.io.Source.fromFile(q).mkString)
        if (Config.debugQueryPlan)
          System.out.println(qStmt + "\n\n")

        val normalizedqStmt = ejNorm.normalize(CTENormalizer.normalize(qStmt))
        if (Config.debugQueryPlan)
          System.out.println("After normalization:\n" + normalizedqStmt + "\n\n")

        new SQLSemanticCheckerAndTypeInference(schema).checkAndInfer(normalizedqStmt)
        val operatorTree = new SQLTreeToOperatorTreeConverter(schema).convert(normalizedqStmt)
        val optimizerTree = {
          if (q.contains("tpch"))
            if (!(List("Q16", "Q19", "Q22").contains(queryName))) new NaiveOptimizer(schema).optimize(operatorTree) else operatorTree // TODO -- FIX OPTIMIZER FOR THESE QUERIES
          else if (q.contains("tpcds"))
            if (!(List("Q1", "Q3", "Q10", "Q15", "Q19", "Q42", "Q52", "Q58", "Q65", "Q69", "Q79", "Q85", "Q91").contains(queryName))) new NaiveOptimizer(schema).optimize(operatorTree) else operatorTree // TODO -- FIX OPTIMIZER FOR THESE QUERIES
          else operatorTree
        }
        //val optimizerTree = operatorTree // TODO -- FIX OPTIMIZER
        if (Config.debugQueryPlan)
          System.out.println(optimizerTree + "\n\n")

        executeQuery(optimizerTree, schema)

        // Check results
        if (Config.checkResults) {
          val resultFile = filesToExecute.get(".result").toList.flatten.filter(f => f.contains(queryName + ".result")) match {
            case elem :: _ => elem
            case List()    => ""
          }
          val resq = scala.io.Source.fromFile(getOutputName).mkString
          if (new java.io.File(resultFile).exists) {
            val resc = {
              val str = scala.io.Source.fromFile(resultFile).mkString
              str * Config.numRuns
            }
            if (resq != resc) {
              System.out.println("-----------------------------------------")
              System.out.println("QUERY " + q + " DID NOT RETURN CORRECT RESULT!!!")
              System.out.println("Correct result:")
              System.out.println(resc)
              System.out.println("Result obtained from execution:")
              System.out.println(resq)
              System.out.println("-----------------------------------------")
              System.exit(0)
            } else System.out.println("CHECK RESULT FOR QUERY " + q + ": [OK]")
          } else System.out.println("Reference result file not found. Skipping checking of result")
        }
      }
    }
  }
}
