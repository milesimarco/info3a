package es9_2;

import java.util.ArrayList;
import java.util.List;

public class es9Test {
	public static void main(String[] args) {
		
		// Test stringhe
		List<String> s = new ArrayList<String>();
		s.add("4444");
		s.add("333");
		s.add("22");
		s.add("55555");
		s.add("999999999");
		
		System.out.println(s.toString());
		
		Function<Integer,String> f = new StringLength();
		
		Applier.apply(s, f);
		
		System.out.println(s.toString());
		
		System.out.println("Studenti");
		// Esempio Persona-studente
		List<Studente> l = new ArrayList<Studente>();
		l.add(new Studente("Gamba"));
		l.add(new Studente("Bertocchi"));
		l.add(new Studente("Balduzzi"));
		l.add(new Studente("Cossali"));
		l.add(new Studente("Facheris"));
		
		System.out.println(l.toString());
		
		Function<String,Persona> f2 = new NameCompare();
		
		Applier.apply(l, f2);
		
		System.out.println(l.toString());
	}
}

class Persona implements Comparable<Persona> {
	String nome;
	
	public Persona(String s) {
		nome = s;
	}

	@Override
	public int compareTo(Persona p) {
		return nome.compareTo(p.nome);
	}
	
	public String toString() {
		return nome;
	}
}

class Studente extends Persona {

	public Studente(String s) {
		super(s);
	}
	
}
