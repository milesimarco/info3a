package es8;

import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

class Nodo <A, B> {
	A key;
	B value;
	
	public Nodo(A k, B v) {
		key = k;
		value = v;
	}
	
	public String toString() {
		return "{"+key+":"+value+"}";
	}
}

public class GlossarioGeneric_2 <K extends Comparable<K>, T>{
	List<Nodo<K,T>> valueList;
	
	public GlossarioGeneric_2() {
		valueList = new ArrayList<Nodo<K,T>>();
	}
	
	public void insertInOrdine(K key, T value) {
		Nodo<K,T> n = new Nodo<K,T>(key, value);
		Nodo<K,T> tmp;
		
		ListIterator <Nodo<K,T>> iter = valueList.listIterator();
		while (iter.hasNext()) {
			tmp = iter.next();
			if (tmp.key.compareTo(n.key) > 0) {
				valueList.add(iter.previousIndex(), n);
				return;
			}
		}
		
		valueList.add(n);
		return;
	}
	
	public T find(K key) {
		for(Nodo<K,T> tmp : valueList) {
			if(key.compareTo(tmp.key) == 0) return tmp.value;
		}
		
		return null;
	}
	
	public String toString() {
		String s = "[ ";
		for(Nodo<K,T> tmp : valueList) {
			s+=tmp.toString()+ " ";
		}
		
		s+= "]";
		return s;
	}
	
	public static void main(String[] args) {
		GlossarioGeneric_2<String, Integer> g = new GlossarioGeneric_2<String, Integer>();
		
		System.out.println(g.toString());
		g.insertInOrdine("R", 43);
		System.out.println(g.toString());
		g.insertInOrdine("X", 12);
		System.out.println(g.toString());
		g.insertInOrdine("A", 21);
		System.out.println(g.toString());
		g.insertInOrdine("I", 99);
		g.insertInOrdine("J", 52);
		System.out.println(g.toString());
		
		System.out.println("Find X: " +g.find("X"));
		System.out.println("Find QW: "+g.find("QW"));
		System.out.println("Find I: "+g.find("I"));
	}
	
	
	
}
