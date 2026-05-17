
//Classe filha recebendo pai
public class PagamentoBoleto extends Pagamento{
		
		private int codigoBarras;
	
		
	public PagamentoBoleto(int codigobarras, double valor) {
		
		super(valor);
		this.codigoBarras = codigoBarras;
		
		
	}
	
	@Override
	void processar() {
		
		System.out.println("Gerando boleto para o codigo "+ codigoBarras +": R$ " + valor);
		
		
	}

}
