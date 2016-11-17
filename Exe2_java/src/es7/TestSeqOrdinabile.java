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
		System.out.println(s.toString());
		
		s.sort();
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
	
	void insert(Object e){
		arr[n] = (T) e;
		n++;
	}
	
	public String toString(){
		String buff = "";
		for(int i = 0;i < n; i++){
			buff = buff + " " + arr[i].toString();
		}
		return buff;
	}
	
	public void sort(){
		T tmp;
		for(int i = 0; i < n-1; i++){
			for(int j = 0; j < n; j++){
				if( arr[i].compareTo(arr[j]) > 0 ){
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
	}
	

}