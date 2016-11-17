package es6;

public class Covariance {

	public static void main(String[] args) {
		A a = new A();
		B b = new B();
		System.out.println(b.self().getClass());
		System.out.println(a.self().getClass());
		
		A ba = new B();
		System.out.println(ba.self().getClass());
		
	}

}

class A {
	A self(){
		System.out.println("A");
		return this;
	}
}

class B extends A{
	B self(){
		System.out.println("B");
		return this;
	}
}
