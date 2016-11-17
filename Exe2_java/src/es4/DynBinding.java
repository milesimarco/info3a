package es4;

public class DynBinding {

	public static void main(String[] args) {
		int h = 6;
		L l = new M();
		l.print(h);
		
		//@compile-time: viene eseguito L
		//@run-time: viene eseguita L
		
		//Affinchè diventi dynamic binding deve esserci ovverride e quindi L.print(int l)
	}
}

class L {
	void print(double l) {
		System.out.println("L");
	}
}

class M extends L {
	void print(int l) {
		System.out.println("M");
	}
}
