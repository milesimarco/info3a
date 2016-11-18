package es9_2;

public abstract class Function<T extends Comparable<T>, S> {
	public abstract T compute(S param);
}

class Doppio extends Function<Integer,Integer> {

	@Override
	public Integer compute(Integer n) {
		return n*2;
	}
	
}

class StringLength extends Function<Integer,String> {

	@Override
	public Integer compute(String s) {
		return s.length();
	}
	
}

class NameCompare extends Function<String,Persona> {

	@Override
	public String compute(Persona p) {
		return p.nome;
	}
	
}
