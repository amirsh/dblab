package ch.epfl.data
package dblab.legobase
package prettyprinter

import sc.pardis.utils.document._
import sc.pardis.ir._
import sc.pardis.prettyprinter._
import scala.language.implicitConversions
import sc.pardis.deep.scalalib._
import sc.pardis.types._

trait LegoGenerator extends CodeGenerator {
  val outputFileName: String
  // TODO should be moved to SC?
  /**
   * Generates the code for the IR of the given program
   *
   * @param program the input program for which the code is generated
   */
  def apply(program: PardisProgram) {
    generate(program, outputFileName)
  }
}

/**
 * The class responsible for Scala code generation in ANF.
 *
 * This class unparses the IR nodes into their corresponding Scala syntax. However, the generated
 * code still remains in the administrative-normal form (ANF).
 *
 * @param shallow specifies whether the generated code should use the shallow interface classes of
 * LegoBase or not.
 * @param outputFileName the name of output file
 */
class LegoScalaGenerator(val shallow: Boolean = false, val outputFileName: String = "generatedProgram", val isOffheap: Boolean = false) extends ScalaCodeGenerator with LegoGenerator {

  /**
   * Returns the generated code of the necessary import for the shallow libraries
   * to be put in the header
   */
  def getShallowHeader: String = if (shallow) """
import queryengine._
import queryengine.push._
import queryengine.TPCHRelations._
import sc.pardis.shallow._
  """
  else
    ""

  def getOffheapHeader: Document = if (isOffheap) doc"""import ch.epfl.data.dblab.offheap._
import scala.offheap.{data, embed, EmbedArray}
"""
  else
    Document.empty
  /**
   * Returns the generated code that is put in the header
   */
  override def getHeader: Document = doc"""package ch.epfl.data
package dblab.legobase

$getShallowHeader
$getOffheapHeader
import scala.collection.mutable.Set
import scala.collection.mutable.HashMap
import scala.collection.mutable.TreeSet
import scala.collection.mutable.ArrayBuffer
import storagemanager.K2DBScanner
import storagemanager.Loader
import queryengine.GenericEngine
import sc.pardis.shallow.OptimalString
import sc.pardis.shallow.scalalib.collection.Cont

class MultiMap[T, S] extends HashMap[T, Set[S]] with scala.collection.mutable.MultiMap[T, S]

object OrderingFactory {
  def apply[T](fun: (T, T) => Int): Ordering[T] = new Ordering[T] {
    def compare(o1: T, o2: T) = fun(o1, o2)
  }
}
"""

  /**
   * Returns the class/module signature code that the generated query is put inside that.
   */
  override def getTraitSignature(): Document = doc"""object $outputFileName extends LegoRunner {
  def executeQuery(query: String, sf: Double, schema: ch.epfl.data.dblab.legobase.schema.Schema): Unit = main()
  def main(args: Array[String]) {
    run(args)
  }
  def main() = 
  """

  val offHeapAnalyser = new optimization.OffHeapAnalyser()

  /**
   * Generates the code for the IR of the given program
   *
   * @param program the input program for which the code is generated
   */
  override def apply(program: PardisProgram) {
    if (isOffheap) {
      offHeapAnalyser.analyse(program)
    }
    generate(program, outputFileName)
  }

  import ch.epfl.data.sc.pardis.deep.OptimalStringIRs.{ OptimalStringType, OptimalStringNew }

  override def tpeToDocument[T](tp: PardisType[T]): Document = tp match {
    case OptimalStringType if isOffheap => doc"OffheapString"
    case _                              => super.tpeToDocument(tp)
  }

  override def constructorNodeToDocument(fun: ConstructorNode[_]) = fun match {
    case OptimalStringNew(array) if isOffheap => doc"OffheapString($array)"
    case _                                    => super.functionNodeToDocument(fun)
  }

  object OffheapStructDefToDocument extends StructDefToDocument {
    override def signatureMod(structDef: PardisStructDef[_]): Document = "@data"
    override def fieldDef(field: StructElemInformation): Document =
      (if (offHeapAnalyser.isOffHeap(field.tpe)) doc"@embed " else Document.empty) :: super.fieldDef(field)
  }

  override def getStruct(structDef: PardisStructDef[_]): Document = if (isOffheap && offHeapAnalyser.isOffheap(structDef))
    OffheapStructDefToDocument(structDef)
  else
    super.getStruct(structDef)
}

/**
 * The class responsible for Scala code generation in a way more readable than ANF.
 *
 * This class unparses the IR nodes into their corresponding Scala syntax. The generated code
 * is no longer in ANF, but in a more similar format to a code written by human.
 *
 * @param IR the polymorphic embedding trait which contains the reified program.
 * @param shallow specifies whether the generated code should use the shallow interface classes of
 * LegoBase or not.
 * @param outputFileName the name of output file
 */
class LegoScalaASTGenerator(val IR: Base, override val shallow: Boolean = false, override val outputFileName: String = "generatedProgram", override val isOffheap: Boolean = false) extends LegoScalaGenerator(shallow, outputFileName, isOffheap) with ASTCodeGenerator[Base]

/**
 * The class responsible for C code generation in ANF.
 *
 * This class unparses the IR nodes into their corresponding C syntax. However, the generated
 * code still remains in the administrative-normal form (ANF).
 *
 * @param shallow specifies whether the generated code should use the shallow interface classes of
 * LegoBase or not.
 * @param outputFileName the name of output file
 * @param verbose outputs comments inside the code to provide more information about specific variable
 * definitions. For example, in the case of defining mutable variables an appropriate comment in front
 * of that variable definition.
 */
class LegoCGenerator(val shallow: Boolean = false, val outputFileName: String = "generatedProgram", override val verbose: Boolean = true) extends CCodeGenerator /* with BooleanCCodeGen */ with LegoGenerator {
  import sc.cscala.deep.GArrayHeaderIRs._

  /**
   * Generates the code for the given function definition node
   *
   * @param fun the input function definition node
   * @returns the corresponding generated code
   */
  override def functionNodeToDocument(fun: FunctionNode[_]) = fun match {
    case GArrayHeaderG_array_indexObject(array, i) => "g_array_index(" :: expToDocument(array) :: ", " :: CUtils.pardisTypeToString(fun.tp) :: ", " :: expToDocument(i) :: ")"
    case _                                         => super.functionNodeToDocument(fun)
  }
}

/**
 * The class responsible for C code generation in a way more readable than ANF.
 *
 * This class unparses the IR nodes into their corresponding C syntax. The generated code
 * is no longer in ANF, but in a more similar format to a code written by human.
 *
 * @param IR the polymorphic embedding trait which contains the reified program.
 * @param shallow specifies whether the generated code should use the shallow interface classes of
 * LegoBase or not.
 * @param outputFileName the name of output file
 * @param verbose outputs comments inside the code to provide more information about specific variable
 * definitions. For example, in the case of defining mutable variables an appropriate comment in front
 * of that variable definition.
 */
class LegoCASTGenerator(val IR: Base, override val shallow: Boolean = false, override val outputFileName: String = "generatedProgram", override val verbose: Boolean = true) extends LegoCGenerator(shallow, outputFileName, verbose) with CASTCodeGenerator[Base]
