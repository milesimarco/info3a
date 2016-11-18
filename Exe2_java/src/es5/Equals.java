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
		Persona p3 = new Persona("GMBDNL12345");
		
		//Finchè fai equals tra Persona l'equals così è corretto
		
		System.out.print("p1.equals(p2) ? ");System.out.println(p1.equals(p2));
		System.out.print("p3.equals(p1) ? ");System.out.println(p3.equals(p1));
		System.out.print("p1.equals(p3) ? ");System.out.println(p1.equals(p3));
		
		Object o = new Persona("GMBDNL12345");
		// Falso anche se gli oggetti sono entrambi Persona() con stesso cf
		System.out.print("p1.equals(o) ? ");System.out.println(p1.equals(o)); 
		
		Persona_correct pc1 = new Persona_correct("GMBDNL12345");
		Persona_correct pc2 = new Persona_correct("GMBDNL12345");
		Object o2 = new Persona_correct("GMBDNL12345");
		//Tutto corretto
		System.out.print("pc1.equals(pc2) ? ");System.out.println(pc1.equals(pc2));
		System.out.print("pc1.equals(o2) ? ");System.out.println(pc1.equals(o2));
		System.out.print("o2.equals(pc2) ? ");System.out.println(o2.equals(pc2));
		
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

class Persona_correct{
	String nome;
	String cf;
	
	public Persona_correct(String cf) {
		this.cf = new String(cf);
	}
	
	public boolean equals(Object o) {
		if (o instanceof Persona_correct) {
			return this.cf.equals(((Persona_correct)o).cf);
		} else {
			return o.equals(this);
		}
	}
	
}