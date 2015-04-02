package ch.epfl.data
package dblab.legobase
package compiler

import deep._
import prettyprinter._
import optimization._
import optimization.c._
import sc.pardis.optimization._
import sc.pardis.ir._
import sc.pardis.types.PardisTypeImplicits._
import sc.pardis.types._
import sc.pardis.compiler._

class Settings(val args: List[String]) {
  import Settings._
  val SUPPORTED_CS = (1 to 22).toList
  val LARGE_OUTPUT_QUERIES = List(10, 11, 16, 20)

  def isLargeOutputQuery(tpchQuery: Int) = LARGE_OUTPUT_QUERIES.contains(tpchQuery)

  def validate(targetIsC: Boolean, tpchQuery: Int): Unit = {
    for (arg <- args.filter(a => a.startsWith("+") || a.startsWith("-")).filter(arg => !ALL_FLAGS.contains(arg))) {
      System.out.println(s"${Console.YELLOW}Warning${Console.RESET}: flag $arg is not defined!")
    }
    if (!hashMapLowering && (setToArray || setToLinkedList || containerFlattenning))
      throw new Exception("It's impossible to lower Sets without lowering HashMap and MultiMap!")
    if (hashMapLowering && hashMapNoCollision)
      throw new Exception(s"$hmNoCol and $hm2set cannot be chained together.")
    if ((columnStore || partitioning) && (!SUPPORTED_CS.contains(tpchQuery)))
      throw new Exception(s"$cstore and $part only work for the Queries ${SUPPORTED_CS.mkString(" & ")} for the moment!")
    if (!hasFlag(largeOut) && isLargeOutputQuery(tpchQuery)) {
      System.out.println(s"${Console.YELLOW}Warning${Console.RESET}: The queries ${LARGE_OUTPUT_QUERIES.mkString("Q", ", Q", "")} should have $largeOut flag. Automatically enabled!")
    } else if (hasFlag(largeOut) && !isLargeOutputQuery(tpchQuery)) {
      System.out.println(s"${Console.YELLOW}Warning${Console.RESET}: Only the queries ${LARGE_OUTPUT_QUERIES.mkString("Q", ", Q", "")} should have $largeOut flag.")
    }
    if (hasFlag(largeOut) && !targetIsC) {
      throw new Exception(s"$largeOut is only available for C Code Generation.")
    }
    if (badRecordHandling && oldCArrayHandling) {
      throw new Exception(s"$badRec and $oldCArr cannot be chained together.")
    }
  }
  @inline def hasFlag(flag: String): Boolean = args.exists(_ == flag)
  def hashMapLowering: Boolean = hasFlag(hm2set)
  def setToArray: Boolean = hasFlag(set2arr)
  def setToLinkedList: Boolean = hasFlag(set2ll)
  def containerFlattenning: Boolean = hasFlag(contFlat)
  def columnStore: Boolean = hasFlag(cstore)
  def partitioning: Boolean = hasFlag(part)
  def hashMapPartitioning: Boolean = hasFlag(hmPart)
  def mallocHoisting: Boolean = hasFlag(mallocHoist)
  def constArray: Boolean = hasFlag(constArr)
  def stringCompression: Boolean = hasFlag(comprStrings)
  def noLetBinding: Boolean = hasFlag(noLet)
  def ifAggressive: Boolean = hasFlag(ifAgg)
  def oldCArrayHandling: Boolean = hasFlag(oldCArr)
  def badRecordHandling: Boolean = hasFlag(badRec)
  def stringOptimization: Boolean = hasFlag(strOpt)
  def hashMapNoCollision: Boolean = hasFlag(hmNoCol)
  def largeOutputHoisting(targetIsC: Boolean, tpchQuery: Int): Boolean = !onlyLoading && (hasFlag(largeOut) || (isLargeOutputQuery(tpchQuery) && targetIsC))
  def noFieldRemoval: Boolean = hasFlag(noFieldRem)
  def noSingletonHashMap: Boolean = hasFlag(noSingHm)
  def nameIsWithFlag: Boolean = hasFlag(nameWithFlag)
  def onlyLoading: Boolean = hasFlag(onlyLoad)

  import Main.Q12SynthesizedExtract
  def isSynthesized: Boolean = args(2) match {
    case Q12SynthesizedExtract(_, _) => true
    case _                           => false
  }
  def queryName: String = args(2)
}

object Settings {
  val hm2set = "+hm2set"
  val set2arr = "+set2arr"
  val set2ll = "+set2ll"
  val contFlat = "+cont-flat"
  val cstore = "+cstore"
  val part = "+part"
  val hmPart = "+hm-part"
  val mallocHoist = "+malloc-hoist"
  val constArr = "+const-arr"
  val comprStrings = "+comprStrings"
  val noLet = "+no-let"
  val ifAgg = "+if-agg"
  val oldCArr = "+old-carr"
  val badRec = "+bad-rec"
  val strOpt = "+str-opt"
  val hmNoCol = "+hm-no-col"
  val largeOut = "+large-out"
  val noFieldRem = "+no-field-rem"
  val noSingHm = "+no-sing-hm"
  val nameWithFlag = "-name-with-flag"
  val onlyLoad = "-only-load"
  val ALL_FLAGS = List(hm2set, set2arr, set2ll, contFlat, cstore, part, hmPart, mallocHoist, constArr, comprStrings, noLet, ifAgg, oldCArr, badRec, strOpt, hmNoCol, largeOut, noFieldRem, noSingHm, nameWithFlag, onlyLoad)
}

class LegoCompiler(val DSL: LoweringLegoBase, val number: Int, val scalingFactor: Double, val generateCCode: Boolean, val settings: Settings) extends Compiler[LoweringLegoBase] {
  object MultiMapOptimizations extends TransformerHandler {
    def apply[Lang <: Base, T: PardisType](context: Lang)(block: context.Block[T]): context.Block[T] = {
      new sc.pardis.deep.scalalib.collection.MultiMapOptimalTransformation(context.asInstanceOf[LoweringLegoBase]).optimize(block)
    }
  }

  def outputFile: String = {
    def queryWithNumber =
      if (settings.isSynthesized)
        settings.queryName
      else
        "Q" + number
    def argsString = settings.args.filter(_.startsWith("+")).map(_.drop(1)).sorted.mkString("_")
    if (settings.nameIsWithFlag)
      argsString + "_" + queryWithNumber
    else
      queryWithNumber
  }

  val reportCompilationTime: Boolean = true

  override def compile[T: PardisType](program: => Expression[T], outputFile: String): Unit = {
    if (reportCompilationTime) {
      val block = utils.Utilities.time(DSL.reifyBlock(program), "Reification")
      val optimizedBlock = utils.Utilities.time(optimize(block), "Optimization")
      val irProgram = irToPorgram.createProgram(optimizedBlock)
      utils.Utilities.time(codeGenerator.generate(irProgram, outputFile), "Code Generation")
    } else {
      super.compile(program, outputFile)
    }
  }

  override def irToPorgram = if (generateCCode) {
    IRToCProgram(DSL)
  } else {
    IRToProgram(DSL)
  }

  def compile[T: PardisType](program: => Expression[T]): Unit = compile[T](program, outputFile)
  /**
   * If MultiMap is remaining without being converted to something which doesn't have set,
   * the field removal causes the program to be wrong
   */
  def shouldRemoveUnusedFields = (settings.hashMapPartitioning ||
    (
      settings.hashMapLowering && (settings.setToArray || settings.setToLinkedList))) && !settings.noFieldRemoval
  // pipeline += TreeDumper(false)
  pipeline += LBLowering(shouldRemoveUnusedFields)
  pipeline += ParameterPromotion
  pipeline += DCE
  pipeline += PartiallyEvaluate

  // pipeline += PartiallyEvaluate
  pipeline += HashMapHoist
  if (!settings.noSingletonHashMap)
    pipeline += SingletonHashMapToValueTransformer

  if (settings.hashMapPartitioning) {

    if (number == 18) {
      pipeline += ConstSizeArrayToLocalVars
      pipeline += DCE
      pipeline += TreeDumper(true)
      pipeline += new HashMapTo1DArray(DSL)
    }
    pipeline += new HashMapPartitioningTransformer(DSL, number, scalingFactor)

    pipeline += ParameterPromotion
    pipeline += PartiallyEvaluate
    pipeline += DCE
  }

  if (settings.stringCompression) pipeline += new StringCompressionTransformer(DSL, number)
  pipeline += TreeDumper(false)

  if (settings.hashMapLowering || settings.hashMapNoCollision) {
    if (settings.hashMapLowering) {
      pipeline += MultiMapOptimizations
      pipeline += new HashMapToSetTransformation(DSL, number)
    }
    if (settings.hashMapNoCollision) {
      pipeline += new HashMapNoCollisionTransformation(DSL, number)
      // pipeline += TreeDumper(false)
    }
    // pipeline += PartiallyEvaluate
    pipeline += DCE

    if (settings.setToLinkedList) {
      pipeline += SetLinkedListTransformation
      if (settings.containerFlattenning) {
        pipeline += ContainerFlatTransformer
      }
      pipeline += ContainerLowering
    }

    if (settings.setToArray) {
      pipeline += SetArrayTransformation
    }
    if (settings.setToLinkedList || settings.setToArray || settings.hashMapNoCollision) {
      pipeline += AssertTransformer(TypeAssertion(t => !t.isInstanceOf[DSL.SetType[_]]))
      //pipeline += ParameterPromotion
      pipeline += DCE
      pipeline += PartiallyEvaluate
      pipeline += new OptionToCTransformer(DSL) | new Tuple2ToCTransformer(DSL)
      pipeline += ParameterPromotion
    }

    pipeline += new BlockFlattening(DSL) // should not be needed!
  }

  if (settings.partitioning && number == 3) {
    pipeline += new WhileToRangeForeachTransformer(DSL)
    pipeline += new ArrayPartitioning(DSL, number)
    pipeline += DCE
  }

  // pipeline += PartiallyEvaluate
  // pipeline += DCE

  if (settings.constArray) {
    pipeline += ConstSizeArrayToLocalVars
    // pipeline += SingletonArrayToValueTransformer
  }

  if (settings.columnStore) {

    pipeline += new ColumnStoreTransformer(DSL, number, settings)
    // if (settings.hashMapPartitioning) {
    //   pipeline += new ColumnStore2DTransformer(DSL, number)
    // }
    pipeline += ParameterPromotion
    pipeline += PartiallyEvaluate

    pipeline += DCE
    if (settings.partitioning && number == 6) {
      pipeline += new PartitionTransformer(DSL)
    }
    pipeline += ParameterPromotion
    pipeline += PartiallyEvaluate
    pipeline += DCE
    pipeline += ParameterPromotion
    pipeline += DCE
  }

  if (settings.mallocHoisting) {
    pipeline += new MemoryAllocationHoist(DSL, number, scalingFactor)
  }

  if (settings.stringOptimization) {
    pipeline += new StringOptimization(DSL)
  }

  if (settings.largeOutputHoisting(generateCCode, number)) {
    pipeline += new LargeOutputPrintHoister(DSL)
  }

  if (generateCCode) pipeline += new CTransformersPipeline(settings)

  pipeline += DCECLang //NEVER REMOVE!!!!

  val codeGenerator =
    if (generateCCode) {
      if (settings.noLetBinding)
        new LegoCASTGenerator(DSL, false, outputFile, true)
      else
        new LegoCGenerator(false, outputFile, true)
    } else {
      if (settings.noLetBinding)
        new LegoScalaASTGenerator(DSL, false, outputFile)
      else
        new LegoScalaGenerator(false, outputFile)
    }

}

object TreeDumper {
  def apply(pretty: Boolean) = new TransformerHandler {
    def apply[Lang <: Base, T: PardisType](context: Lang)(block: context.Block[T]): context.Block[T] = {
      if (pretty) {
        val cg = new LegoScalaGenerator(false, "tree_debug_dump.txt")
        val pw = new java.io.PrintWriter("tree_debug_dump.txt")
        val doc = cg.blockToDocument(block)
        doc.format(40, pw)
        pw.flush()
      } else {
        val pw = new java.io.PrintWriter(new java.io.File("tree_debug_dump.txt"))
        pw.println(block.toString)
        pw.flush()
      }

      block
    }
  }
}