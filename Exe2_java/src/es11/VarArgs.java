package es11;

public class VarArgs {
	public static void main(String[] args) {
		printStrings("Hola", "man", "how", "are", "you?");
	}

	static void printStrings(String... strings){
		for(String str: strings){
			System.out.print(str + " ");
		}
	}
}
