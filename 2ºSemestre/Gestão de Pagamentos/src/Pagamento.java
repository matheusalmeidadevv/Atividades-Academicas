

//Classe Pai Abstrata
abstract public class Pagamento {
	
	protected double valor;
	
	public Pagamento(double valor2) {
		
		this.valor = valor2;
		
	}

	abstract void processar();
	
}
