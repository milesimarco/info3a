package es10;

public class Terra_singleton {
	private static Terra_singleton instance = null;
	private String crosta = "crosta";
	private String nucleo = "nucleo";
	private String atm = "atmosfera";
	
	private Terra_singleton() {
		// Impedisco di usare il costruttore da altre classi
	}
	
	public static Terra_singleton getInstance() {
		if (instance == null) {
			instance = new Terra_singleton();
		}
		
		return instance;
	}
	
	// Non ho ben capito cosa intendessi Gargantini con
	// "Ha come componenti diverse parti della terra"
	// Questi sono esempi per l'utilizzo del Singleton
	
	protected String getCrosta() {
		return crosta;
	}
	
	protected void setCrosta(String s) {
		crosta = s;
	}
	
	protected String getNucleo() {
		return nucleo;
	}
	
	protected void setNucleo(String s) {
		nucleo = s;
	}
	
	protected String getAtm() {
		return atm;
	}
	
	protected void setAtm(String s) {
		atm = s;
	}

}
