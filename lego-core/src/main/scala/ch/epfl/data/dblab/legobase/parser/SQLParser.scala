package ch.epfl.data
package dblab.legobase
package parser

import scala.util.matching.Regex
import scala.util.parsing.combinator.RegexParsers
import scala.util.parsing.combinator._
import scala.util.parsing.combinator.lexical._
import scala.util.parsing.combinator.syntactical._
import scala.util.parsing.combinator.token._

import scala.util.parsing.input.CharArrayReader.EofCh

/**
 * A simple SQL parser.
 * Based on: https://github.com/stephentu/scala-sql-parser
 */
object SQLParser extends StandardTokenParsers {

  def parse(statement: String): Option[SelectStatement] = {
    phrase(parseSelectStatement)(new lexical.Scanner(statement)) match {
      case Success(r, q) => Option(r)
      case _             => None
    }
  }

  def parseSelectStatement: Parser[SelectStatement] = (
    "SELECT" ~> parseProjections ~ "FROM" ~ parseRelations ~ parseWhere.? ~ parseGroupBy.? ~ parseOrderBy.? ~ parseLimit.? <~ ";".? ^^ { case pro ~ _ ~ tab ~ whe ~ grp ~ ord ~ lim => SelectStatement(pro, tab, whe, grp, ord, lim) })

  def parseProjections: Parser[Projections] = (
    "*" ^^^ AllColumns()
    | rep1sep(parseAliasedExpression, ",") ^^ { case lst => ExpressionProjections(lst) })

  def parseAliasedExpression: Parser[(Expression, Option[String])] = (
    parseExpression ~ ("AS".? ~> (ident | stringLit)).? ^^ { case expr ~ alias => (expr, alias) })

  def parseExpression: Parser[Expression] = parseOr

  def parseOr: Parser[Expression] =
    parseAnd * ("OR" ^^^ { (a: Expression, b: Expression) => Or(a, b) })

  def parseAnd: Parser[Expression] =
    parseSimpleExpression * ("AND" ^^^ { (a: Expression, b: Expression) => And(a, b) })

  def parseSimpleExpression: Parser[Expression] = (
    parseAddition ~ rep(
      ("=" | "<>" | "!=" | "<" | "<=" | ">" | ">=") ~ parseAddition ^^ {
        case op ~ right => (op, right)
      }
        | "BETWEEN" ~ parseAddition ~ "AND" ~ parseAddition ^^ {
          case op ~ a ~ _ ~ b => (op, a, b)
        }
        | "NOT" ~> "IN" ~ "(" ~ (parseSelectStatement | rep1sep(parseExpression, ",")) ~ ")" ^^ {
          case op ~ _ ~ a ~ _ => (op, a, true)
        }
        | "IN" ~ "(" ~ (parseSelectStatement | rep1sep(parseExpression, ",")) ~ ")" ^^ {
          case op ~ _ ~ a ~ _ => (op, a, false)
        }
        | "NOT" ~> "LIKE" ~ parseAddition ^^ { case op ~ a => (op, a, true) }
        | "LIKE" ~ parseAddition ^^ { case op ~ a => (op, a, false) }) ^^ {
        case left ~ elems =>
          elems.foldLeft(left) {
            case (acc, (("=", right: Expression)))                  => Equals(acc, right)
            case (acc, (("<>", right: Expression)))                 => NotEquals(acc, right)
            case (acc, (("!=", right: Expression)))                 => NotEquals(acc, right)
            case (acc, (("<", right: Expression)))                  => LessThan(acc, right)
            case (acc, (("<=", right: Expression)))                 => LessOrEqual(acc, right)
            case (acc, ((">", right: Expression)))                  => GreaterThan(acc, right)
            case (acc, ((">=", right: Expression)))                 => GreaterOrEqual(acc, right)
            case (acc, (("BETWEEN", l: Expression, r: Expression))) => And(GreaterOrEqual(acc, l), LessOrEqual(acc, r))
            case (acc, (("IN", e: Seq[_], n: Boolean)))             => In(acc, e.asInstanceOf[Seq[Expression]], n)
            case (acc, (("IN", s: SelectStatement, n: Boolean)))    => In(acc, Seq(s), n)
            case (acc, (("LIKE", e: Expression, n: Boolean)))       => Like(acc, e, n)
          }
      } |
      "NOT" ~> parseSimpleExpression ^^ (Not(_)) |
      "EXISTS" ~> "(" ~> parseSelectStatement <~ ")" ^^ { case s => Exists(s) } |
      parseCaseExpression)

  def parseAddition: Parser[Expression] =
    parseMultiplication * (
      "+" ^^^ { (a: Expression, b: Expression) => Add(a, b) } |
      "-" ^^^ { (a: Expression, b: Expression) => Subtract(a, b) })

  def parseMultiplication: Parser[Expression] =
    parsePrimaryExpression * (
      "*" ^^^ { (a: Expression, b: Expression) => Multiply(a, b) } |
      "/" ^^^ { (a: Expression, b: Expression) => Divide(a, b) })

  def parsePrimaryExpression: Parser[Expression] = (
    parseLiteral |
    parseKnownFunction |
    ident ~ opt("." ~> ident | "(" ~> repsep(parseExpression, ",") <~ ")") ^^ {
      case id ~ None           => FieldIdent(None, id)
      case a ~ Some(b: String) => FieldIdent(Some(a), b)
    } |
    "(" ~> (parseExpression | parseSelectStatement) <~ ")"
    | "+" ~> parsePrimaryExpression ^^ (UnaryPlus(_))
    | "-" ~> parsePrimaryExpression ^^ (UnaryMinus(_)))

  def parseKnownFunction: Parser[Expression] = (
    "COUNT" ~> "(" ~> ("*" ^^^ CountAll() | parseExpression ^^ { case expr => CountExpr(expr) }) <~ ")"
    | "MIN" ~> "(" ~> parseExpression <~ ")" ^^ (Min(_))
    | "MAX" ~> "(" ~> parseExpression <~ ")" ^^ (Max(_))
    | "SUM" ~> "(" ~> parseExpression <~ ")" ^^ (Sum(_))
    | "AVG" ~> "(" ~> parseExpression <~ ")" ^^ (Avg(_))
    | "EXTRACT" ~> "(" ~> parseYearMonthDay ~ "FROM" ~ parseExpression <~ ")" ^^
    { case time ~ _ ~ expr => Extract(time, expr) })

  def parseYearMonthDay: Parser[ExtractType] = (
    "YEAR" ^^^ YEAR
    | "MONTH" ^^^ MONTH
    | "DAY" ^^^ DAY)

  def parseLiteral: Parser[Expression] = (
    numericLit ^^ { case i => IntLiteral(i.toInt) }
    | floatLit ^^ { case f => FloatLiteral(f.toDouble) }
    | stringLit ^^ { case s => StringLiteral(s) }
    | "NULL" ^^ { case _ => NullLiteral() }
    | "DATE" ~> stringLit ^^ { case s => DateLiteral(s) })

  def parseCaseExpression: Parser[Expression] =
    "CASE" ~> opt(parseExpression) ~
      rep1("WHEN" ~> parseExpression ~ "THEN" ~ parseExpression ^^ { case w ~ _ ~ t => CaseExpressionCase(w, t) }) ~
      opt("ELSE" ~> parseExpression) <~ "END" ^^ {
        case Some(e) ~ cases ~ default => SimpleCaseExpression(e, cases, default)
        case None ~ cases ~ default    => ComplexCaseExpression(cases, default)
      }

  def parseRelations: Parser[Seq[Relation]] = rep1sep(parseRelation, ",")

  def parseRelation: Parser[Relation] = (
    parseSimpleRelation ~ rep(opt(parseJoinType) ~ "JOIN" ~ parseSimpleRelation ~ "ON" ~ parseExpression ^^
      { case tpe ~ _ ~ r ~ _ ~ e => (tpe.getOrElse(InnerJoin), r, e) }) ^^ {
      case r ~ elems => elems.foldLeft(r) { case (x, r) => Join(x, r._2, r._1, r._3) }
    })

  def parseSimpleRelation: Parser[Relation] = (
    ident ~ ("AS".? ~> ident.?) ^^ {
      case tbl ~ alias => Table(tbl, alias)
    }
    | ("(" ~> parseSelectStatement <~ ")") ~ ("AS".? ~> ident) ^^ {
      case subq ~ alias => Subquery(subq, alias)
    })

  def parseJoinType: Parser[JoinType] = (
    ("LEFT" <~ "OUTER".? | "RIGHT" <~ "OUTER".? | "FULL" ~ "OUTER") ^^ {
      case "LEFT"           => LeftOuterJoin
      case "RIGHT"          => RightOuterJoin
      case "FULL" ~ "OUTER" => FullOuterJoin
    }
    | "INNER" ^^^ InnerJoin)

  def parseWhere: Parser[Expression] = (
    "WHERE" ~> parseExpression)

  def parseGroupBy: Parser[GroupBy] = (
    "GROUP" ~> "BY" ~> rep1sep(parseExpression, ",") ~ ("HAVING" ~> parseExpression).? ^^
    { case exp ~ hav => GroupBy(exp, hav) })

  def parseOrderBy: Parser[OrderBy] = (
    "ORDER" ~> "BY" ~> rep1sep(parseOrderKey, ",") ^^ { case keys => OrderBy(keys) })

  def parseOrderKey: Parser[(Expression, OrderType)] = (
    parseExpression ~ ("ASC" | "DESC").? ^^ {
      case v ~ Some("DESC") => (v, DESC)
      case v ~ Some("ASC")  => (v, ASC)
      case v ~ None         => (v, ASC)
    })

  def parseLimit: Parser[Limit] = (
    "LIMIT" ~> numericLit ^^ { case lim => Limit(lim.toInt) })

  class SqlLexical extends StdLexical {
    case class FloatLit(chars: String) extends Token {
      override def toString = chars
    }
    override def token: Parser[Token] =
      (identChar ~ rep(identChar | digit) ^^ { case first ~ rest => processIdent(first :: rest mkString "") }
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

  lexical.reserved += (
    "SELECT", "AS", "OR", "AND", "GROUP", "ORDER", "BY", "WHERE",
    "JOIN", "ASC", "DESC", "FROM", "ON", "NOT", "HAVING",
    "EXISTS", "BETWEEN", "LIKE", "IN", "NULL", "LEFT", "RIGHT",
    "FULL", "OUTER", "INNER", "COUNT", "SUM", "AVG", "MIN", "MAX",
    "DATE", "TOP", "LIMIT", "EXTRACT", "YEAR", "MONTH", "DAY",
    "CASE", "WHEN", "THEN", "ELSE", "END")

  lexical.delimiters += (
    "*", "+", "-", "<", "=", "<>", "!=", "<=", ">=", ">", "/", "(", ")", ",", ".", ";")

}
