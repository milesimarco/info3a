
object Count {
  
  // Tema d'esame del 12 feb 2016 - Esempi di funzioni in Scala
  
  def contieni7(x: Int): Boolean = x.toString().contains('7')
  
  def countC7_for (a: Int, b: Int): Int = {
    var c = 0
    for (i <- a to b) {
      if( contieni7(i) ){
        c+=1
      }
    }
    c
  }
  
  def countC7_foreach (a: Int, b: Int): Int = {
    val l = List.range(a,b)
    var c = 0
    l.foreach(i => if(contieni7(i)){c+=1} )
    c
  }
  
  def countC7_ric (a: Int, b: Int): Int = {
    val l = List.range(a,b)
    recursion(l, 0)
  }
  
  def recursion(l: List[Int], c: Int): Int = {
    if( l.isEmpty ) c
    else{
      if(contieni7(l.head)) recursion(l.tail, 1+c)
      else recursion(l.tail, c)
    }
  }
  
  def countC7_map (a: Int, b: Int): Int = {
    val l = List.range(a,b)
    val mapped = l.map(i => if(contieni7(i)) 1 else 0)
    mapped.sum
  }
  
  
  def countC7_fold (a:Int, b: Int): Int = {
    val l = List.range(a,b)
    l.foldLeft(0)((value, next) => if(contieni7(next)) value + 1 else value)
  }
  
  
  def countC7_filter (a:Int, b: Int): Int = {
    val l = List.range(a,b)
    l.filter(i => contieni7(i)).size
  }
  
  def contieniN(N: Int)(x: Int): Boolean = x.toString().contains(N.toString())
  def count_filter(fun: Int => Boolean)(a: Int, b: Int) = List.range(a,b).filter(i => fun(i)).size
  
  def main(args: Array[String]): Unit = {
    var a = 7
    var b = 200
    
    println("For: " + countC7_for(a, b))
    println("Foreach: " + countC7_foreach(a, b))
    println("Recursion: " + countC7_ric(a, b))
    println("Map: " + countC7_map(a, b))
    println("Fold: " + countC7_fold(a, b))
    println("Filter: " + countC7_filter(a, b))
    
    //hof
    println("HOF: " + count_filter(contieniN(7))(a, b))

  }
}