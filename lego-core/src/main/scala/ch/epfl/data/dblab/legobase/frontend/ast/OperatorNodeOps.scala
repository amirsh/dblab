package ch.epfl.data
package dblab.legobase
package frontend
package ast

import sc.pardis.ast.{ Node => PardisASTNode, _ }

class OperatorNodeOps(val node: OperatorNode) extends NodeOps {
  type N = OperatorNode
  def children: List[N] = node.produceChildren
  def rebuild: N = {
    new OperatorTransformer {
    }.transform(node)
  }
  def recreate(children: List[PardisASTNode]): N = {
    def getChild(index: Int): OperatorNode = children(index).asInstanceOf[OperatorNode]
    node match {
      case ScanOpNode(table, name, qualifier) => ScanOpNode(table, name, qualifier)
      case SelectOpNode(parent, cond, having) => SelectOpNode(getChild(0), cond, having)
      case JoinOpNode(leftParent, rightParent, clause, joinType, leftAlias, rightAlias) =>
        JoinOpNode(getChild(0), getChild(1), clause, joinType, leftAlias, rightAlias)
      case AggOpNode(parent, aggs, gb, names)    => AggOpNode(getChild(0), aggs, gb, names)
      case MapOpNode(parent, mapIndices)         => MapOpNode(getChild(0), mapIndices)
      case OrderByNode(parent, ob)               => OrderByNode(getChild(0), ob)
      case PrintOpNode(parent, projNames, limit) => PrintOpNode(getChild(0), projNames, limit)
      case SubqueryNode(parent)                  => SubqueryNode(getChild(0))
      case SubquerySingleResultNode(parent)      => SubquerySingleResultNode(getChild(0))
    }
  }
}
