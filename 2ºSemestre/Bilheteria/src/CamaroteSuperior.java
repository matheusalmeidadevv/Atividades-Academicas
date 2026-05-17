
public class CamaroteSuperior extends Ingresso implements IValor{
	
	private double valorIngresso;
	
	public CamaroteSuperior(int numIngressos, double vlIngresso, String tipoIngresso) {
		super(numIngressos, vlIngresso, tipoIngresso);
		// TODO Auto-generated constructor stub
	}
	
	@Override
	public String imprimeValor() {
		
		valorIngresso = vlIngresso + (vlIngresso * 0.3);
		
		return "O valor do Ingresso Camarote é: " + valorIngresso;
	}
	
	@Override
	public String toString() {
		
		return "======Status do Camarote====== \n\nNumero de Ingressos: " + this.numIngressos + "\nTipo do ingresso: " + this.tipoIngresso;
		
	}
}

