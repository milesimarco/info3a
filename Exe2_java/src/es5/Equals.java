package es5;

/*
 * Definisci una classe Persona con un campo codice fiscale (16 caratteri). Due Persona sono uguali
(equals) se hanno lo stesso codice fiscale. Prova a definire equals con questa segnatura:
public boolean equals(Persona p){....}
Riesci a fare un esempio in cui due Persona pur avendo lo stesso codice fiscale non sono equals?
Come dovresti modificare il metodo equals
 */

public class Equals {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Persona p1 = new Persona("GMBDNL12345");
		Persona p2 = new Persona("GMBDNL12345");
		Persona o = new Persona("GMBDNL12345");
		
		System.out.print("p1.equals(p2) ? ");System.out.println(p1.equals(p2));
		System.out.print("o.equals(p1) ? ");System.out.println(o.equals(p1));
		System.out.print("p1.equals(o) ? ");System.out.println(p1.equals(o));
	}

}

class Persona{
	String nome;
	String cf;
	
	public Persona(String cf) {
		this.cf = new String(cf);
	}
	
	//in questo modo due persone con lo stesso cf potrebbero non essere equals se viene chiamato equals(o) invece di equals(p)
	public boolean equals(Persona p) {
		return this.cf.equals(p.cf);
	}
	
}
