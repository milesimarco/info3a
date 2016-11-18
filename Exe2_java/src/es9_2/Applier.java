package es9_2;

import java.util.Comparator;
import java.util.List;

class functionCompare<T extends Comparable<T>,S> implements Comparator<S> {
	
	Function<T,S> f;
	
	public functionCompare(Function<T,S> f) {
		this.f = f;
	}

	@Override
	public int compare(S arg0, S arg1) {
		return f.compute(arg0).compareTo(f.compute(arg1));
	}
	
}

public class Applier {
	
	public static <T extends Comparable<T>,S> void apply(List<? extends S> l, Function<T,S> f) {
		functionCompare<T,S> comp = new functionCompare<T,S>(f);
		
		l.sort(comp);
	}
}
