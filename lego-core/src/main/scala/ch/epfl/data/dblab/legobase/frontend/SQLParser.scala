package ch.epfl.data
package dblab.legobase
package frontend

import scala.util.matching.Regex
import scala.util.parsing.combinator.RegexParsers
import scala.util.parsing.combinator._
import scala.util.parsing.combinator.lexical._
import scala.util.parsing.combinator.syntactical._
import scala.util.parsing.combinator.token._
import scala.util.parsing.input.CharArrayReader.EofCh

/**
 * A simple SQL parser.
 * Based on: https://github.com/stephentu/scala-sql-parser but heavily modified for our needs
 */
object SQLParser extends StandardTokenParsers {

  def parse(statement: String): Node = {
    phrase(parseQuery)(new lexical.Scanner(statement)) match {
      case Success(r, q) => r
      case failure       => throw new Exception("Unable to parse SQL query!\n" + failure)
    }
  }

  def parseQuery: Parser[Node] = (
    rep1sep(parseSelectStatement, "UNION" ~ "ALL") ^^ {
      case stmts => stmts.size match {
        case 1 => stmts(0)
        case _ =>
          val root = stmts(0).asInstanceOf[Node]
          stmts.tail.foldLeft(root)((node, tree) => UnionAll(node, tree))
      }
    })

  /**********************************************************/
  /* Parse parts of individual select statements in a query */
  /**********************************************************/
  def parseSelectStatement: Parser[SelectStatement] = (
    parseAllCTEs ~ "SELECT" ~ parseProjections ~ "FROM" ~ parseFrom ~ parseWhere.? ~ parseGroupBy.? ~ parseHaving.? ~ parseOrderBy.? ~ parseLimit.? <~ ";".? ^^ {
      case withs ~ _ ~ pro ~ _ ~ tab ~ whe ~ grp ~ hav ~ ord ~ lim => {
        val rel = extractAllRelationsFromJoinTrees(tab)
        val aliases = extractAllAliasesFromProjections(pro) ++ withs.map(w => extractAllAliasesFromProjections(extractProjectionFromSubquery(w.subquery))).flatten
        SelectStatement(withs, pro, rel, Some(tab), whe, grp, hav, ord, lim, aliases)
      }
    })

  def parseAllCTEs: Parser[List[Subquery]] =
    opt("WITH" ~> rep1sep(parseCTE, ",")) ^^ {
      case Some(ctes) => ctes
      case None       => List[Subquery]()
    }

  def parseCTE: Parser[Subquery] =
    ident ~ "AS" ~ "(" ~ parseQuery <~ ")" ^^ { case name ~ _ ~ _ ~ stmt => Subquery(stmt, name) }

  def parseProjections: Parser[Projections] = (
    "*" ^^^ AllColumns()
    | rep1sep(parseAliasedExpression, ",") ^^ { case lst => ExpressionProjections(lst) })

  def parseAliasedExpression: Parser[(Expression, Option[String])] =
    parseExpression ~ parseAlias.? ^^ { case expr ~ alias => (expr, alias) }

  def parseFrom: Parser[Seq[Relation]] = (
    rep1sep(parseRelation, ",")
    | parseQuery ^^ { case q => extractRelationFromSubquery(q) })

  def parseRelation: Parser[Relation] = (
    parseSingleRelation ~ rep(opt(parseJoinType) ~ "JOIN" ~ parseSingleRelation ~ "ON" ~ parseExpression ^^ {
      case tpe ~ _ ~ r ~ _ ~ e => (tpe.getOrElse(InnerJoin), r, e)
    }) ^^ {
      case r ~ elems => elems.foldLeft(r) { case (x, r) => Join(x, r._2, r._1, r._3) }
    })

  def parseSingleRelation: Parser[Relation] = (
    ident ~ parseAlias.? ^^ {
      case tbl ~ alias => SQLTable(tbl, alias)
    }
    | ("(" ~> parseQuery <~ ")") ~ parseAlias ^^ {
      case subq ~ alias => Subquery(subq, alias)
    })

  def parseJoinType: Parser[JoinType] = (
    "LEFT" ~ ("OUTER" | "SEMI").? ^^ {
      case l ~ r => (l, r) match {
        case (l, None)          => LeftOuterJoin
        case (l, Some("SEMI"))  => LeftSemiJoin
        case (l, Some("OUTER")) => LeftOuterJoin
      }
    }
    | "RIGHT" ~ "OUTER".? ^^^ RightOuterJoin
    | "FULL" ~ "OUTER" ^^^ FullOuterJoin
    | "ANTI" ^^^ AntiJoin
    | "INNER" ^^^ InnerJoin)

  def parseWhere: Parser[Expression] =
    "WHERE" ~> parseExpression

  def parseGroupBy: Parser[GroupBy] =
    "GROUP" ~> "BY" ~> rep1sep(parseExpression, ",") ^^ { case exp => GroupBy(exp) }

  def parseHaving: Parser[Having] =
    "HAVING" ~> parseExpression ^^ { case exp => Having(exp) }

  def parseOrderBy: Parser[OrderBy] =
    "ORDER" ~> "BY" ~> rep1sep(parseOrderKey, ",") ^^ { case keys => OrderBy(keys) }

  def parseOrderKey: Parser[(Expression, OrderType)] = (
    parseExpression ~ ("ASC" | "DESC").? ^^ {
      case v ~ Some("DESC") => (v, DESC)
      case v ~ Some("ASC")  => (v, ASC)
      case v ~ None         => (v, ASC)
    })

  def parseLimit: Parser[Limit] =
    "LIMIT" ~> numericLit ^^ { case lim => Limit(lim.toInt) }
  // ---------------------------------------------------------------------------------------------------------------------------------------------- 

  def parseAlias: Parser[String] =
    ("AS".? ~> ident) ^^ { case ident => ident } |
      ("AS".? ~> stringLit) ^^ { case lit => lit }

  def extractAllAliasesFromProjections(pro: Projections) = pro match {
    case ep: ExpressionProjections => ep.lst.zipWithIndex.filter(p => p._1._2.isDefined).map(al => (al._1._1, al._1._2.get, al._2))
    case ac: AllColumns            => Seq()
  }
  def extractAllRelationsFromJoinTrees(joinTrees: Seq[Relation]) =
    joinTrees.foldLeft(Seq[Relation]())((list, tb) => list ++ extractRelationsFromJoinTree(tb))

  def extractRelationsFromJoinTree(joinTree: Relation): Seq[Relation] = {
    joinTree match {
      case Join(left, right, _, _) =>
        extractRelationsFromJoinTree(left) ++ extractRelationsFromJoinTree(right)
      case tbl: SQLTable => Seq(tbl)
      case sq: Subquery  => extractRelationFromSubquery(sq.subquery)
    }
  }

  def extractRelationFromSubquery(sq: Node): Seq[Relation] = sq match {
    case stmt: SelectStatement => stmt.joinTrees match {
      case Some(tr) => tr.flatMap(extractRelationsFromJoinTree(_))
      case None     => stmt.relations
    }
    case UnionAll(top, bottom) => extractRelationFromSubquery(top) ++ extractRelationFromSubquery(bottom)
  }

  def extractProjectionFromSubquery(sq: Node): Projections = sq match {
    case stmt: SelectStatement => stmt.projections
    case unionAll: UnionAll    => extractProjectionFromSubquery(unionAll.top)
  }

  /**********************/
  /* Expression parsing */
  /**********************/
  def parseExpression: Parser[Expression] = parseOperandExpression * (
    "OR" ^^^ { (a: Expression, b: Expression) => Or(a, b) }
    | "AND" ^^^ { (a: Expression, b: Expression) => And(a, b) })

  def exprToSQLNode(acc: Expression, elem: Any): Expression = (acc, elem) match {
    case (acc, (("=", right: Expression)))                  => Equals(acc, right)
    case (acc, (("<>", right: Expression)))                 => NotEquals(acc, right)
    case (acc, (("!=", right: Expression)))                 => NotEquals(acc, right)
    case (acc, (("<", right: Expression)))                  => LessThan(acc, right)
    case (acc, (("<=", right: Expression)))                 => LessOrEqual(acc, right)
    case (acc, ((">", right: Expression)))                  => GreaterThan(acc, right)
    case (acc, ((">=", right: Expression)))                 => GreaterOrEqual(acc, right)
    case (acc, (("BETWEEN", l: Expression, r: Expression))) => And(GreaterOrEqual(acc, l), LessOrEqual(acc, r))
    case (acc, (("IN", e: Seq[_])))                         => In(acc, e.asInstanceOf[Seq[Expression]])
    case (acc, (("IN", s: SelectStatement)))                => In(acc, Seq(s))
    case (acc, (("LIKE", e: Expression)))                   => Like(acc, e)
    case (acc, (("NOT", e: Serializable)))                  => Not(exprToSQLNode(acc, e))
    case (acc, (("||", e: Expression)))                     => StringConcat(acc, e)
  }

  def parseOperandExpression: Parser[Expression] = (
    parseAddition ~ rep(parseOperation) ^^ {
      case leftOperator ~ expressions =>
        expressions.foldLeft(leftOperator)((acc, elem) => exprToSQLNode(acc, elem))
    })

  def parseOperation: Parser[Product] = (
    ("=" | "<>" | "!=" | "<" | "<=" | ">" | ">=") ~ parseAddition ^^ { case op ~ right => (op, right) }
    | "BETWEEN" ~ parseAddition ~ "AND" ~ parseAddition ^^ {
      case op ~ a ~ _ ~ b => (op, a, b)
    }
    | "IN" ~ "(" ~ (parseSelectStatement | rep1sep(parseExpression, ",")) ~ ")" ^^ {
      case op ~ _ ~ a ~ _ => (op, a)
    }
    | "LIKE" ~ parseAddition ^^ { case op ~ a => (op, a) }
    | "NOT" ~ parseOperation ^^ { case op ~ a => (op, a) }
    | "||" ~ parseAddition ^^ { case op ~ a => (op, a) }
    | "EXISTS" ~ "(" ~ parseSelectStatement <~ ")" ^^ { case op ~ _ ~ a => (op, a) })

  def parseAddition: Parser[Expression] =
    parseMultiplication * (
      "+" ^^^ { (a: Expression, b: Expression) => Add(a, b) } |
      "-" ^^^ { (a: Expression, b: Expression) => Subtract(a, b) })

  def parseMultiplication: Parser[Expression] =
    parsePrimaryExpression * (
      "*" ^^^ { (a: Expression, b: Expression) => Multiply(a, b) } |
      "/" ^^^ { (a: Expression, b: Expression) => Divide(a, b) })

  def parsePrimaryExpression: Parser[Expression] = (
    parseLiteral
    | parseFunction
    | ident ~ opt("." ~> ident | "(" ~> repsep(parseExpression, ",") <~ ")") ^^ {
      case id ~ None           => FieldIdent(None, id)
      case a ~ Some(b: String) => FieldIdent(Some(a), b)
    }
    | "(" ~> (parseExpression | parseSelectStatement) <~ ")"
    | "DISTINCT" ~> parseExpression ^^ { case e => Distinct(e) }
    | "CASE" ~ "WHEN" ~ parseExpression ~ "THEN" ~ parseExpression ~ "ELSE" ~ parseExpression <~ "END" ^^ {
      case _ ~ _ ~ cond ~ _ ~ thenp ~ _ ~ elsep => Case(cond, thenp, elsep)
    }
    | "+" ~> parsePrimaryExpression ^^ (UnaryPlus(_))
    | "-" ~> parsePrimaryExpression ^^ (UnaryMinus(_))
    // TODO: Casting and rounding operations are for the moment ignored.
    | "CAST" ~ "(" ~> parseExpression ~ "AS" ~ parseDataType <~ ")" ^^ {
      case expr ~ _ ~ format => format match {
        case "DATE" => DateLiteral(expr.toString.replaceAll("'", ""))
        case _      => expr
      }
    }
    | "ROUND" ~ "(" ~> parseExpression ~ "," ~ parseLiteral <~ ")" ^^ {
      case expr ~ _ ~ literal => expr
    })

  def parseDataType: Parser[String] = (
    "DECIMAL" ~ "(" ~ parseLiteral ~ "," ~ parseLiteral ~ ")" ^^^ { "DECIMAL" } |
    "NUMERIC" ~ "(" ~ parseLiteral ~ "," ~ parseLiteral ~ ")" ^^^ { "NUMERIC" } |
    "DATE" ^^^ { "DATE" })

  def parseFunction: Parser[Expression] = (
    "COUNT" ~> "(" ~> ("*" ^^^ CountAll() | parseExpression ^^ { case expr => CountExpr(expr) }) <~ ")"
    | "MIN" ~> "(" ~> parseExpression <~ ")" ^^ (Min(_))
    | "MAX" ~> "(" ~> parseExpression <~ ")" ^^ (Max(_))
    | "SUM" ~> "(" ~> parseExpression <~ ")" ^^ (Sum(_))
    | "AVG" ~> "(" ~> parseExpression <~ ")" ^^ (Avg(_))
    | "YEAR" ~> "(" ~> parseExpression <~ ")" ^^ (Year(_))
    | ("SUBSTRING" | "SUBSTR") ~> "(" ~> parseExpression ~ "," ~ parseExpression ~ "," ~ parseExpression <~ ")" ^^ {
      case str ~ _ ~ idx1 ~ _ ~ idx2 => Substring(str, idx1, idx2)
    }
    // TODO: Coalesce function is for the moment always returning the first argument
    | "COALESCE" ~ "(" ~> parseExpression ~ "," ~ parseExpression <~ ")" ^^ {
      case left ~ _ ~ right => left
    })

  def parseLiteral: Parser[Expression] = (
    numericLit ~ "DAYS".? ^^ {
      case i ~ date => date match {
        case Some(d) => IntLiteral(i.toInt)
        case None    => IntLiteral(i.toInt)
      }
    }
    | floatLit ^^ { case f => DoubleLiteral(f.toDouble) }
    | stringLit ^^ {
      case s => {
        if (s.length == 1) CharLiteral(s.charAt(0))
        else StringLiteral(s)
      }
    }
    | "NULL" ^^ { case _ => NullLiteral() }
    | "DATE" ~> stringLit ^^ { case s => DateLiteral(s) })
  // ----------------------------------------------------------------------------------------------------------------------------------------------

  /*******************************************/
  /* Lexical analytsis methods and variables */
  /*******************************************/
  class SqlLexical extends StdLexical {
    case class FloatLit(chars: String) extends Token {
      override def toString = chars
    }
    override def processIdent(token: String) = {
      val tkn = {
        val str = token.toUpperCase
        if (tokens.contains(str)) str
        else token
      }
      super.processIdent(tkn)
    }
    override def token: Parser[Token] =
      (identChar ~ rep(identChar | digit) ^^ {
        case first ~ rest => processIdent(first :: rest mkString "")
      }
        | rep1(digit) ~ opt('.' ~> rep(digit)) ^^ {
          case i ~ None    => NumericLit(i mkString "")
          case i ~ Some(d) => FloatLit(i.mkString("") + "." + d.mkString(""))
        }
        | '\'' ~ rep(chrExcept('\'', '\n', EofCh)) ~ '\'' ^^ { case '\'' ~ chars ~ '\'' => StringLit(chars mkString "") }
        | '\"' ~ rep(chrExcept('\"', '\n', EofCh)) ~ '\"' ^^ { case '\"' ~ chars ~ '\"' => StringLit(chars mkString "") }
        | EofCh ^^^ EOF
        | '\'' ~> failure("unclosed string literal")
        | '\"' ~> failure("unclosed string literal")
        | delim
        | failure("illegal character"))
    def regex(r: Regex): Parser[String] = new Parser[String] {
      def apply(in: Input) = {
        val source = in.source
        val offset = in.offset
        val start = offset // handleWhiteSpace(source, offset)
        (r findPrefixMatchOf (source.subSequence(start, source.length))) match {
          case Some(matched) =>
            Success(source.subSequence(start, start + matched.end).toString,
              in.drop(start + matched.end - offset))
          case None =>
            Success("", in)
        }
      }
    }
  }
  override val lexical = new SqlLexical

  def floatLit: Parser[String] =
    elem("decimal", _.isInstanceOf[lexical.FloatLit]) ^^ (_.chars)

  val tokens = List(
    "SELECT", "AS", "OR", "AND", "GROUP", "ORDER", "BY", "WHERE", "WITH", "JOIN",
    "ASC", "DESC", "FROM", "ON", "NOT", "HAVING", "EXISTS", "BETWEEN", "LIKE", "IN",
    "NULL", "LEFT", "RIGHT", "FULL", "OUTER", "SEMI", "INNER", "ANTI", "COUNT", "SUM",
    "AVG", "MIN", "MAX", "YEAR", "DATE", "TOP", "LIMIT", "CASE", "WHEN", "THEN", "ELSE",
    "END", "SUBSTRING", "SUBSTR", "UNION", "ALL", "CAST", "DECIMAL", "DISTINCT", "NUMERIC",
    "DAYS", "COALESCE", "ROUND")

  for (token <- tokens)
    lexical.reserved += token

  lexical.delimiters += (
    "*", "+", "-", "<", "=", "<>", "!=", "<=", ">=", ">", "||", "/", "(", ")", ",", ".", ";")
  //----------------------------------------------------------------------------------------------------------------------------------------------
}
