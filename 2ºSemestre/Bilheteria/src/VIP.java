
public class VIP extends Ingresso implements IValor{
	
	private double valorIngresso;
	
	public VIP(int numIngressos, double vlIngresso, String tipoIngresso) {
		super(numIngressos, vlIngresso, tipoIngresso);
		
	}
	
	@Override
	public String imprimeValor() {
		
		valorIngresso = vlIngresso + (vlIngresso * 0.15);
		
		return "O valor do Ingresso VIP é: " + valorIngresso;
	}
	
	@Override
	public String toString() {
		
		return "======Status Do Ingresso VIP====== \n\nNumero de Ingressos: " + this.numIngressos + "\nTipo do ingresso: " + this.tipoIngresso;
		
	}
 
}
