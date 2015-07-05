package ch.epfl.data
package dblab.legobase
package frontend
package ast

import sc.pardis.ast.{ Node => PardisASTNode, _ }

class OperatorNodeOps(val node: OperatorNode) extends NodeOps {
  type N = OperatorNode
  def children: List[N] = node.produceChildren
  def rebuild: N = ???
  def recreate(children: List[PardisASTNode]): N = ???
}