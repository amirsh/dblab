package ch.epfl.data
package dblab
package legobase
package queryengine

import schema._
import frontend.parser._
import frontend.optimizer._
import frontend.analyzer._
import utils.Utilities._
import java.io.PrintStream
import config._
import schema._
import deep._
import legobase.experimentation.tpch.TPCHCompiler

/**
 * The module responsbile for executing the OLAP DBMS.
 *
 * @author Amir Shaikhha
 */
object OLAPEngine {

  sealed trait State
  case object Start extends State
  case object Loaded extends State

  var currentState: State = Start
  /**
   * The starting point of the OLAP DBMS.
   */
  def main(args: Array[String]): Unit = {
    if (args.size > 0) {
      System.out.println("You should not use any arguments")
      System.exit(1)
    }
    import TPCHCompiler._
    System.out.println("*** Legobase OLAP Engine ***")
    System.out.println("Available commands:")
    System.out.println("  warm-up")
    System.out.println("    Warms up the underlying just-in-time (JIT) compiler")
    System.out.println("  exit")
    System.out.println("    Exits the interactive mode")
    acceptInputFromConsole { str =>
      var exit = false
      str match {
        case "exit" => exit = true
        case "warm-up" =>
          warmUpJIT()
        case _ => System.out.println(s"Command $str not available!")
      }
      exit
    }
    // Set the folder containing data
    // Config.datapath = args(0);
    // val dataFolder = new java.io.File(Config.datapath)
    // if (!dataFolder.exists || !dataFolder.isDirectory) {
    //   println("Data folder " + Config.datapath + " does not exist or is not a directory. Cannot proceed");
    //   return
    // }

    // val filesToExecute = args.tail.map(arg => {
    //   val f = new java.io.File(arg)
    //   if (!f.exists) {
    //     println("Warning: Command line parameter " + f + " is not a file or directory. Skipping this argument...")
    //     List()
    //   } else if (f.isDirectory) f.listFiles.map(arg + "/" + _.getName).toList
    //   else List(arg)
    // }).flatten.groupBy(f => f.substring(f.lastIndexOf('.'), f.length))

    // val ddlInterpreter = new DDLInterpreter(new Catalog(scala.collection.mutable.Map()))

    // // TODO -- Ideally, the following should not be dependant on the file extension, but OK for now.
    // for (f <- (filesToExecute.get(".ddl") ++ filesToExecute.get(".ri")).flatten.toList) {
    //   System.out.println("Executing file " + f)
    //   val ddlDefStr = scala.io.Source.fromFile(f).mkString
    //   val ddlObj = DDLParser.parse(ddlDefStr)
    //   ddlInterpreter.interpret(ddlObj)
    // }
    // //System.out.println(ddlInterpreter.getCurrSchema)

    // // TODO -- That must be calculated as well in ddlInterpreter
    // if (Config.gatherStats) {
    //   ddlInterpreter.getCurrSchema.stats += "NUM_YEARS_ALL_DATES" -> 7
    //   System.out.println(ddlInterpreter.getCurrSchema.stats.mkString("\n"))
    // }

    // // Now run all queries specified
    // val schema = ddlInterpreter.getCurrSchema
    // val subqNorm = new SQLSubqueryNormalizer(schema)

    // for (q <- filesToExecute.get(".sql").toList.flatten) {
    //   currQuery = q
    //   queryName = q.substring(q.lastIndexOf('/') + 1, q.length).replace(".sql", "")
    //   println("Executing file " + q + " (queryName = " + queryName + ")")

    //   Console.withOut(new PrintStream(getOutputName)) {
    //     val sqlParserTree = SQLParser.parse(scala.io.Source.fromFile(q).mkString)
    //     if (Config.debugQueryPlan)
    //       System.out.println("Original SQL Parser Tree:\n" + sqlParserTree + "\n\n")

    //     val subqueryNormalizedqTree = subqNorm.normalize(sqlParserTree)
    //     if (Config.debugQueryPlan)
    //       System.out.println("After Subqyery Normalization:\n" + subqueryNormalizedqTree + "\n\n")

    //     new SQLAnalyzer(schema).checkAndInfer(subqueryNormalizedqTree)
    //     val operatorTree = new SQLToQueryPlan(schema).convert(subqueryNormalizedqTree)

    //     if (Config.debugQueryPlan)
    //       System.out.println("Before Optimizer:\n" + operatorTree + "\n\n")

    //     val optimizerTree = new QueryPlanNaiveOptimizer(schema).optimize(operatorTree)

    //     if (Config.debugQueryPlan)
    //       System.out.println("After Optimizer:\n" + optimizerTree + "\n\n")

    //     val qp = PlanCompiler.executeQuery(optimizerTree, schema, queryName)

    //     // PlanExecutor.executeQuery(optimizerTree, schema)

    //     // // Check results
    //     // if (Config.checkResults) {
    //     //   val resultFile = filesToExecute.get(".result").toList.flatten.filter(f => f.contains(queryName + ".result")) match {
    //     //     case elem :: _ => elem
    //     //     case List()    => ""
    //     //   }
    //     //   val resq = scala.io.Source.fromFile(getOutputName).mkString
    //     //   if (new java.io.File(resultFile).exists) {
    //     //     val resc = {
    //     //       val str = scala.io.Source.fromFile(resultFile).mkString
    //     //       str * Config.numRuns
    //     //     }
    //     //     if (resq != resc) {
    //     //       System.out.println("-----------------------------------------")
    //     //       System.out.println("QUERY " + q + " DID NOT RETURN CORRECT RESULT!!!")
    //     //       System.out.println("Correct result:")
    //     //       System.out.println(resc)
    //     //       System.out.println("Result obtained from execution:")
    //     //       System.out.println(resq)
    //     //       System.out.println("-----------------------------------------")
    //     //       System.exit(0)
    //     //     } else System.out.println("CHECK RESULT FOR QUERY " + q + ": [OK]")
    //     //   } else System.out.println("Reference result file not found. Skipping checking of result")
    //     // }
    //   }
    // }
  }
}