
public class Ingresso {
	
	protected int numIngressos;
	protected double vlIngresso;
	protected String tipoIngresso;
	
	public Ingresso(int numIngressos, double vlIngresso, String tipoIngresso) {
		
		this.numIngressos = numIngressos;
		this.vlIngresso = vlIngresso;
		this.tipoIngresso = tipoIngresso;
		
	}
	
	
	public String toString() {
		
		return "======Status====== \n\nNumero de Ingressos: " + this.numIngressos + "\nTipo do ingresso: " + this.tipoIngresso;
		
	}
	
}
