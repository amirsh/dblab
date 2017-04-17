package ch.epfl.data
package dblab
package queryengine
package monad

// import sc.pardis.annotations.{ deep, needsCircular, dontLift, needs, reflect, pure, transformation }
import sc.pardis.shallow.{ Record, DynamicCompositeRecord }
import push.MultiMap
import scala.collection.mutable.MultiMap
import scala.collection.mutable.HashMap
import scala.collection.mutable.ArrayBuffer
import scala.collection.mutable.TreeSet
import scala.language.implicitConversions
import QueryIterator.{ NULL, iterate }

// @reflect[Query[_]]
// @transformation
abstract class QueryIterator[T] { self =>
  def destroy[S](consumer: (() => T) => S): S

  final def findFirst(p: T => Boolean, next: () => T): T = {
    var elem: T = NULL
    var found = false
    while (!found && {
      elem = next()
      elem
    } != NULL) {
      if (p(elem)) {
        found = true
      }
    }
    elem
  }
  def map[S](f: T => S): QueryIterator[S] = destroy { next =>
    iterate { () =>
      val elem = next()
      if (elem == NULL)
        NULL
      else
        f(elem)
    }
  }
  def filter(p: T => Boolean): QueryIterator[T] = destroy { next =>
    iterate { () =>
      findFirst(p, next)
    }
  }
  def foreach(f: T => Unit): Unit = destroy { next =>
    var elem: T = NULL
    while ({
      elem = next()
      elem
    } != NULL) {
      f(elem)
    }
  }

  def foldLeft[S](z: S)(f: (S, T) => S): S = {
    var res = z
    for (e <- this) {
      res = f(res, e)
    }
    res
  }

  def sum(implicit num: Numeric[T]): T = {
    var res = num.zero
    for (e <- this) {
      res = num.plus(res, e)
    }
    res
  }
  def count: Int = {
    var size = 0
    for (e <- this) {
      size += 1
    }
    size
  }
  def avg(implicit num: Fractional[T]): T =
    num.div(sum, num.fromInt(count))
  def groupBy[K](par: T => K): GroupedQueryIterator[K, T] =
    new GroupedQueryIterator(this, par)
  def filteredGroupBy[K](pred: T => Boolean, par: T => K): GroupedQueryIterator[K, T] =
    filter(pred).groupBy(par)

  def sortBy[S](f: T => S)(implicit ord: Ordering[S]): QueryIterator[T] = {
    val (treeSet, size) = {
      val treeSet = new TreeSet()(
        new Ordering[T] {
          def compare(o1: T, o2: T) = {
            val res = ord.compare(f(o1), f(o2))
            if (res == 0 && o1 != o2) {
              -1
            } else {
              res
            }
          }
        })
      for (elem <- this) {
        treeSet += elem
      }
      (treeSet, treeSet.size)
    }
    var index = 0
    destroy { next =>
      iterate { () =>
        if (index >= size)
          NULL
        else {
          index += 1
          val elem = treeSet.head
          treeSet -= elem
          elem
        }
      }
    }
  }

  // def sortByReverse[S](f: T => S)(implicit ord: Ordering[S]): Query[T] =
  //   new Query(underlying.sortBy(f).reverse)

  // def take(i: Int): QueryIterator[T] = (k: T => Unit) => {
  //   var count = 0
  //   foreach(e => {
  //     if (count < i) {
  //       k(e)
  //       count += 1
  //     }
  //   })
  // }

  def minBy[S](f: T => S)(implicit ord: Ordering[S]): T = {
    var minResult: T = null.asInstanceOf[T]
    for (e <- this) {
      if (minResult == null || ord.compare(f(minResult), f(e)) > 0) {
        minResult = e
      }
    }
    minResult
  }

  def printRows(printFunc: T => Unit, limit: Int): Unit = {
    var rows = 0
    if (limit == -1) {
      for (e <- this) {
        printFunc(e)
        rows += 1
      }
    } else {
      destroy { next =>
        var elem: T = NULL
        while (rows < limit && {
          elem = next()
          elem
        } != NULL) {
          printFunc(elem)
          rows += 1
        }
      }
    }
    printf("(%d rows)\n", rows)
  }

  def materialize: QueryIterator[T] = {
    val arr = getList.asInstanceOf[List[Any]].toArray.asInstanceOf[Array[T]]
    QueryIterator(arr)
  }

  def getList: List[T] = {
    var res = ArrayBuffer[T]()
    for (e <- this) {
      res += e
    }
    res.toList
  }
}

object QueryIterator {
  def NULL[S]: S = null.asInstanceOf[S]
  def apply[T](arr: Array[T]): QueryIterator[T] = new QueryIterator[T] {
    var index = 0
    override def destroy[S](consumer: (() => T) => S): S = {
      consumer { () =>
        if (index >= arr.length)
          NULL
        else {
          index += 1
          arr(index - 1)
        }
      }
    }
  }
  def apply[T](set: scala.collection.mutable.Set[T]): SetIterator[T] = new SetIterator[T](set)
  def iterate[T](next: () => T): QueryIterator[T] = new QueryIterator[T] {
    override def destroy[S](consumer: (() => T) => S): S = consumer(next)
  }
}

class SetIterator[T](set: scala.collection.mutable.Set[T]) extends QueryIterator[T] { self =>
  var currentSet: scala.collection.mutable.Set[T] = set

  override def destroy[S](consumer: (() => T) => S): S = {
    consumer { () =>
      if (currentSet.isEmpty) {
        NULL
      } else {
        val elem = currentSet.head
        currentSet = currentSet.tail
        elem
      }
    }
  }

  def next(): T = destroy { n =>
    n()
  }

  def withFilter(p: T => Boolean): SetIterator[T] = new SetIterator[T](set) {
    val underlying = self.filter(p)
    override def destroy[S](consumer: (() => T) => S): S = underlying.destroy(consumer)
  }
}

class JoinableQueryIterator[T <: Record](private val underlying: QueryIterator[T]) {
  def hashJoin[S <: Record, R](q2: QueryIterator[S])(leftHash: T => R)(rightHash: S => R)(
    joinCond: (T, S) => Boolean): QueryIterator[DynamicCompositeRecord[T, S]] = {
    val hm = MultiMap[R, T]
    for (elem <- underlying) {
      hm.addBinding(leftHash(elem), elem)
    }

    q2.destroy { next =>
      iterate { () =>
        var found = false
        var elem1: T = NULL
        val elem2 = q2 findFirst ({ t =>
          val k = rightHash(t)
          hm.get(k) exists { tmpBuffer =>
            val leftElem = tmpBuffer find (bufElem => joinCond(bufElem, t))
            // Only to check if it is not the N-M case
            if (tmpBuffer.filter(bufElem => joinCond(bufElem, t)).size > 1) {
              throw new Exception("This join is for the N-M case")
            }
            leftElem match {
              case Some(le) =>
                elem1 = le
                found = true
                true
              case None =>
                false
            }
          }
        }, next)
        if (found) {
          elem1.concatenateDynamic(elem2)
        } else {
          NULL
        }
      }
    }
  }

  def mergeJoin[S <: Record](q2: QueryIterator[S])(
    ord: (T, S) => Int)(joinCond: (T, S) => Boolean): QueryIterator[DynamicCompositeRecord[T, S]] = {
    var elem1: T = NULL
    var elem2: S = NULL
    var nextJoinElem: DynamicCompositeRecord[T, S] = NULL
    var atEnd: Boolean = false
    def proceedLeft(next: () => T): Unit = {
      elem1 = next()
      atEnd ||= elem1 == NULL
    }
    def proceedRight(next: () => S): Unit = {
      elem2 = next()
      atEnd ||= elem2 == NULL
    }
    var init = false
    underlying.destroy { nextLeft =>
      q2.destroy { nextRight =>
        iterate { () =>
          var found: Boolean = false
          if (!init) {
            proceedLeft(nextLeft)
            proceedRight(nextRight)
            init = true
          }
          while (!found && !atEnd) {
            val (ne1, ne2) = elem1 -> elem2
            val cmp = ord(ne1, ne2)
            if (cmp < 0) {
              proceedLeft(nextLeft)
            } else {
              proceedRight(nextRight)
              if (cmp == 0) {
                nextJoinElem = ne1.concatenateDynamic(ne2)
                found = true
              }
            }
          }
          if (atEnd && !found)
            NULL
          else
            nextJoinElem
        }
      }
    }
  }

  def leftHashSemiJoin[S <: Record, R](q2: QueryIterator[S])(leftHash: T => R)(rightHash: S => R)(
    joinCond: (T, S) => Boolean): QueryIterator[T] = {
    val hm = MultiMap[R, S]
    for (elem <- q2) {
      hm.addBinding(rightHash(elem), elem)
    }
    val leftIterator = underlying.filter(t => {
      val k = leftHash(t)
      hm.get(k).exists(buf =>
        buf.exists(e => joinCond(t, e)))
    })

    leftIterator.destroy { next =>
      iterate { () =>
        next()
      }
    }
  }
}

class GroupedQueryIterator[K, V](underlying: QueryIterator[V], par: V => K) {
  def getGroupByResult: GroupByResult[K, V] = {
    val max_partitions = 50
    // Q3
    // val max_partitions = 150000
    // Q9
    // val max_partitions = 25 * 7
    val MAX_SIZE = max_partitions
    val keyIndex = new HashMap[K, Int]()
    val keyRevertIndex = new Array[Any](MAX_SIZE).asInstanceOf[Array[K]]
    var lastIndex = 0
    val array = new Array[Array[Any]](MAX_SIZE).asInstanceOf[Array[Array[V]]]
    val eachBucketSize = new Array[Int](MAX_SIZE)
    // val thisSize = 1 << 25
    val thisSize = 1 << 22
    val arraySize = thisSize / MAX_SIZE * 8
    Range(0, MAX_SIZE).foreach { i =>
      // val arraySize = originalArray.length
      // val arraySize = 128
      array(i) = new Array[Any](arraySize).asInstanceOf[Array[V]] // discovered a funny scalac bug!
      eachBucketSize(i) = 0
    }
    GroupByResult(array, keyRevertIndex, eachBucketSize, MAX_SIZE, keyIndex)
    // ???
  }

  def mapValues[S](func: QueryIterator[V] => S): QueryIterator[(K, S)] = {

    val (groupByResult, partitions) = {
      val groupByResult = getGroupByResult
      val GroupByResult(array, keyRevertIndex, eachBucketSize, _, keyIndex) =
        groupByResult
      var lastIndex = 0

      underlying.foreach((elem: V) => {
        val key = par(elem)
        val bucket = keyIndex.getOrElseUpdate(key, {
          keyRevertIndex(lastIndex) = key
          lastIndex = lastIndex + 1
          lastIndex - 1
        })
        array(bucket)(eachBucketSize(bucket)) = elem
        eachBucketSize(bucket) += 1
      })
      (groupByResult, lastIndex)
    }

    var index: Int = 0

    underlying.destroy { next =>
      iterate { () =>
        if (index >= partitions) {
          NULL
        } else {
          val GroupByResult(array, keyRevertIndex, eachBucketSize, _, _) =
            groupByResult
          val i = index
          index += 1
          val arr = array(i).dropRight(array(i).length - eachBucketSize(i))
          val key = keyRevertIndex(i)
          val newValue = func(QueryIterator(arr))
          key -> newValue
        }
      }
    }
  }
}
