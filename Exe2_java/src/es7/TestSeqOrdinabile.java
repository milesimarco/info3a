package es7;

/*
 * Definisci una struttura dati SequenzaOrdinabile che è generica, di elementi ordinabili. Ha
 * sottostante un array (puro di Object). Ha i seguenti metodi:
	• insert che inserisce nella sequenza
	• metodo sort che ordina (usando ad esempio bubble sort)
	• toString
 * Prova a fare un main in cui provi con le stringhe.
 */

public class TestSeqOrdinabile{
	
	public static void main(String[] args) {
		SequenzaOrdinabile<String> s = new SequenzaOrdinabile<String>();
		s.insert("Hola");
		s.insert("Estraneo");
		s.insert("Gamba");
		s.insert("Celiaco");
		System.out.println(s.toString());
		
		s.sort();
		System.out.println(s.toString());
		
		s.insert("Nuova stringaaa");
		s.insert("AAAAAAA");
		System.out.println(s.toString());
		s.sortOttimizzato();
		System.out.println(s.toString());
		
	}
}


// Aggiungere la condizione extends Comparable<?> da errore per String
class SequenzaOrdinabile<T extends Comparable<T>>{
	T[] arr;
	int n;
	
	public SequenzaOrdinabile() {
		n = 0;
		arr = (T[]) new Comparable[20];
	}
	
	public void insert(T e){
		arr[n] = e;
		n++;
	}
	
	public String toString(){
		String buff = "";
		for(int i = 0;i < n; i++){
			buff = buff + " {" + arr[i].toString() + "}";
		}
		return buff;
	}
	
	public void sort(){
		T tmp;
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if( arr[i].compareTo(arr[j]) > 0 ){
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
	}
	
	// Versione ottimizzata del bubblesort
	public void sortOttimizzato() {
		boolean scambio = true;
		T temp;
		int c= 0; // Ad ogni iterazione porto all'ultimo posto il pi� elevato, quindi al ciclo successivo non controllo pi� l'ultima posizione
		while (scambio) {
			scambio = false;
			for(int i = 0; i < n-1-c; i++) {
				if (arr[i].compareTo(arr[i+1]) > 0) {
					// Scambio
					temp = arr[i];
					arr[i] = arr[i+1];
					arr[i+1] = temp;
					scambio = true;
				}
			}
			c++;
		}
		
	}
	

}