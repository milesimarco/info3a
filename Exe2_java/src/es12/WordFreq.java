package es12;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Scanner;

/*
 * Scrivi una piccola applicazione in cui leggi un file di parole (o dallo standard input) e poi alla fine
stampi la frequenza con cui queste appaiono nel file. Puoi usare Scanner e il suo metodo next per
leggere una parola alla volta da file.
 */

public class WordFreq {
	Scanner scan;
	int wordN;
	public WordFreq() {
		wordN = 0;
		try {
			scan = new Scanner(new File("src/es12/db.txt"));
		} catch (FileNotFoundException e) {
			e.printStackTrace();
			return;
		}
		Map<String, Integer> freq = new HashMap<>();
		String word;
		while(scan.hasNext()){
			word = scan.next();
			if(freq.containsKey(word)){
				freq.put(word, freq.get(word)+1);
			}else{
				freq.put(word, 1);
			}
			wordN++;
		}
		
		Iterator<Entry<String, Integer>> it = freq.entrySet().iterator();
		Entry<String,Integer> mappedValue;
		while(it.hasNext()){
			mappedValue = it.next();
			System.out.print(mappedValue.getKey() + ": ");
			System.out.println(((int) mappedValue.getValue()*100/wordN) + "%");
			
		}
	}
	
	public static void main(String[] args) {
		WordFreq wd = new WordFreq();
		
	}
	
}
