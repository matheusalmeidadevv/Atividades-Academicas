
//Classe filha recebendo pai
public class PagamentoCartao extends Pagamento {
	
	private int numeroCartao;
	
	public PagamentoCartao(int numeroCartao, double valor) {
		
		super(valor);
		this.numeroCartao = numeroCartao;
		
	}

	@Override
	void processar() {
		
		System.out.println("Processando cartão "+ numeroCartao +": R$ " + valor);
		
		
	}


}
