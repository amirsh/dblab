package ch.epfl.data
package dblab.legobase
package frontend
package ast

import sc.pardis.ast._

trait OperatorTransformer extends Transformer {
  type ThisNode = OperatorNode
  def transform(node: OperatorNode): OperatorNode = {
    val result = node match {
      case ScanOpNode(table, name, qualifier) => ScanOpNode(table, name, qualifier)
      case SelectOpNode(parent, cond, having) => SelectOpNode(transform(parent), cond, having)
      case JoinOpNode(leftParent, rightParent, clause, joinType, leftAlias, rightAlias) =>
        JoinOpNode(transform(leftParent), transform(rightParent), clause, joinType, leftAlias, rightAlias)
      case AggOpNode(parent, aggs, gb, names)    => AggOpNode(transform(parent), aggs, gb, names)
      case MapOpNode(parent, mapIndices)         => MapOpNode(transform(parent), mapIndices)
      case OrderByNode(parent, ob)               => OrderByNode(transform(parent), ob)
      case PrintOpNode(parent, projNames, limit) => PrintOpNode(transform(parent), projNames, limit)
      case SubqueryNode(parent)                  => SubqueryNode(transform(parent))
      case SubquerySingleResultNode(parent)      => SubquerySingleResultNode(transform(parent))
    }
    updateSymbol(node, result)
  }
  def updateSymbol(oldNode: OperatorNode, newNode: OperatorNode): OperatorNode = {
    if (oldNode.symbol != null) {
      val oldProps = oldNode.symbol.properties
      val newSymbol = NodeSymbol(newNode)
      for ((pf, p) <- oldProps if pf.constant) {
        newSymbol.updateProperty(p)
      }
      newNode.symbol = newSymbol
    }
    newNode
  }
}

trait OperatorTraverser extends Traverser {
  type ThisNode = OperatorNode
  def traverse(node: OperatorNode) {
    node.children.foreach(n => traverse(n.asInstanceOf[OperatorNode]))
  }
}
