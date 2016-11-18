package es8;

import java.util.Iterator;
import java.util.LinkedList;

/*
 * 8. Generics in Java - glossario
Scrivi una classe generica che rappresenta un dizionario come una lista di coppie di tipo A e B in
cui il primo elemento A è ordinabile. Questa classe ha un metodo insertInOrdine che inserisce una
coppia in ordine rispetto il primo elemento della coppia.
Ha un metodo find che cerca un A e se lo trova (il primo che trova) restituisce il B con cui A è
accoppiato. Se non c'è restituisce null.
Scrivi un main in cui fai un po' di prove.
 */


class Entry<T extends Comparable<T>, S> implements Comparable<Entry<T,S>>{
	T key;
	S value;
	
	public Entry(T key, S value){
		this.key = key;
		this.value = value;
	}
	
	@SuppressWarnings("unchecked")
	@Override
	public boolean equals(Object obj) {
		if (obj instanceof Entry){
			return key.equals(((Entry<T,S>)obj).key) && value.equals(((Entry<T,S>)obj).value);
		}
		return false;
	}
	
	public boolean equalKey(T k){
		return this.key.equals(k);
	}

	@Override
	public int compareTo(Entry<T,S> o) {
		return key.compareTo(o.key);
	}
}

class Glossario<T extends Comparable<T>, S>{
	LinkedList<Entry<T,S>> gloss;
	
	public Glossario(){
		gloss = new LinkedList<>();
	}
	
	public void insertInOrdine(T key, S value){
		Iterator<Entry<T,S>> it = gloss.iterator();
		Entry<T,S> pointer;
		Entry<T,S> n = new Entry<T,S>(key, value);
		int indx = 0;
		
		if(!it.hasNext()){	//empty list
			gloss.add(n);
			return;
		}
		while(it.hasNext()){
			pointer = it.next();
			
			if(pointer.compareTo(n) > 0){
				gloss.add(indx, n);
				return;
			}
			indx++;
		}
		gloss.add(n);		//append
	}
	
	public String toString(){
		String buff = "";
		Entry<T,S> e;
		for(Iterator<Entry<T,S>> it = gloss.iterator(); it.hasNext();){
			e = it.next();
			buff = buff + " " + e.key.toString() + ": " + e.value.toString();
		}
		return buff;
	}
	
	public S find(T s){
		Entry<T,S> e;
		for(Iterator<Entry<T,S>> it = gloss.iterator(); it.hasNext(); ){
			e = it.next();
			if(e.equalKey(s)){
				return e.value;
			}
		}
		return null;
	}
}


public class GlossarioGenerics {
	public static void main(String[] args) {
		Glossario<String,Integer> g1 = new Glossario<String,Integer>();
		g1.insertInOrdine("C", 6);
		g1.insertInOrdine("H", 7);
		g1.insertInOrdine("B", 12);
		g1.insertInOrdine("D", 13);
		//g1.insertInOrdine(new Entry(4, "AA")); 	//test
		
		System.out.println("Glossario:");
		System.out.println(g1.toString());
		System.out.print("Find 'H': ");
		System.out.println(g1.find("H"));
		System.out.print("Find 'Z': ");
		System.out.println(g1.find("Z"));

	}
}
