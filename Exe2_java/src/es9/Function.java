package es9;

/* 
 * Una classe astratta generica Function rappresenta una funzione di calcolo (da input ad output). Una
function ha due parametri T (ordinabile) e S e definisce un metodo astratto compute che prende un
S e calcola il suo T.
Scrivi due esempi di Function:
- la classe Doppio è una Function (estende Function) che dato un intero (Integer) restituisce un
Integer pari al doppio
- la classe StringLength è una Function che come compute restituisce la lunghezza di una String.
*/

public abstract class Function <T extends Comparable<T>,S> {
	abstract public T compute(S o);
}


class Doppio extends Function<Integer, Integer>{
	@Override
	public Integer compute(Integer o) {
		return 2*o;
	}
}


class StringLength extends Function<Integer, String>{
	@Override
	public Integer compute(String o) {
		return o.length();
	}
}


