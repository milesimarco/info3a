package es10;
/**
 * 
 * @author gioba
 *
 * Esempio di pattern Singleton ed esempio di Facade con Terra
 */

public class es10_main {
	public static void main(String[] args) {
		
		// singleton
		
		Terra_singleton t1 = Terra_singleton.getInstance();
		Terra_singleton t2 = Terra_singleton.getInstance();
		
		System.out.println(t1.getCrosta() + " : " + t2.getCrosta());
		System.out.println(t1.getNucleo() + " : " + t2.getNucleo());
		System.out.println(t1.getAtm() + " : " + t2.getAtm());
		
		t1.setCrosta("Crosta modificata su t1");
		t2.setNucleo("Nucleo modificato su t2");
		t1.setAtm("Atm modificata su t1");
		
		System.out.println(t1.getCrosta() + " : " + t2.getCrosta());
		System.out.println(t1.getNucleo() + " : " + t2.getNucleo());
		System.out.println(t1.getAtm() + " : " + t2.getAtm());
		
		
		
	}
}
