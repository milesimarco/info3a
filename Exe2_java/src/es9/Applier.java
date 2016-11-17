package es9;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

import es8.GlossarioGenerics;

/*
 * La class Applier ha un metodo apply che prende una lista di elementi di tipo S e una
Function<T,S> f e ordina la lista utilizzando il valore che compute di f restituisce sugli elementi
della lista.
 */

public class Applier<T extends Comparable<T>, S>{
	
	ArrayList<S> apply(ArrayList<S> input, Function<T,S> func){
		ArrayList<T> output = new ArrayList<>();
		
		//genero gli output e ordino in due fasi separate (ma si può fare anche assieme)
		for(Iterator<S> it = input.iterator(); it.hasNext(); ){
			output.add(func.compute(it.next()));
		}
		
		
		T tmpTi, tmpTj;
		S tmpSi, tmpSj;
		
		//bubblesort adattato per 2d ArrayList
		for(int i = 0; i < input.size(); i++){
			for(int j = i+1; j < input.size(); j++){
				if(output.get(i).compareTo(output.get(j))> 0 ){
					//output
					tmpTi = output.get(i);
					tmpTj = output.get(j);
					output.remove(j);	//j strettamente maggiore di i
					output.remove(i);
					output.add(i, tmpTj);
					output.add(j, tmpTi);
					
					//input
					tmpSi = input.get(i);
					tmpSj = input.get(j);
					input.remove(j);
					input.remove(i);
					input.add(i, tmpSj);
					input.add(j, tmpSi);
				}
			}
		}
		//sono certo esistano modi migliori di farlo
		//l'ideale era forse fare un associazione chiave:valore?
		
		return input;
	}
}
