package es9;

/*
 * Scrivi un esempio in cui ordini una lista di stringhe in base alla loro dimensione usando Applier e
StringLength.
Definisci Persona con nome che è comparable a seconda del nome e Studente che estende persona.
Se volessi ordinare una lista di studenti in base al loro nome, come posso riusare Applier e
Function?
Cerca di usare tutti i costrutti visti come i wildcard, i bounded generics e così via
 */

import java.util.ArrayList;

public class Es9main {
	public static void main(String[] args) {
		Applier a = new Applier<>();
		StringLength strlen = new StringLength();
		
		ArrayList<String> array = new ArrayList<>();
		
		array.add("Hola");
		array.add("Man");
		array.add("randomstufff");
		array.add("Zerrone");
		array.add("Info3a");
		
		System.out.println("Ordinamento per lunghezza");
		System.out.print("Prima: ");
		System.out.println(array);
		a.apply(array, strlen);	//lavora sull'oggetto originale
		System.out.print("Dopo: ");
		System.out.println(array);
		
		//seconda parte: array di studenti
		System.out.println("\nSeconda parte:");
		ArrayList<Studente> stud = new ArrayList<>();
		stud.add(new Studente("Nanniman"));
		stud.add(new Studente("Balduz"));
		stud.add(new Studente("Gamba"));
		System.out.println(stud);
		a.apply(stud, strlen);
		System.out.println(stud);
		
		//per far funzionare anche la classe studente ho ridefinito StringLength extends Function<Integer, String>
		//in StringLength extends Function<Integer, Object> e chiamato toString() sull'oggetto ricevuto

	}
}



abstract class Persona implements Comparable<Persona>{
	String nome;
	Persona(String nome){
		this.nome = nome;
	}
}

class Studente extends Persona{
	
	Studente(String nome) {
		super(nome);
	}

	@Override
	public int compareTo(Persona o) {
		return nome.compareTo(o.nome);
	}
	
	public String toString(){
		return nome;
	}
	
}