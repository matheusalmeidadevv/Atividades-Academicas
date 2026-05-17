
//Principal
public class Principal {

	public static void main(String[] args) {
		
		PagamentoCartao pc1 = new PagamentoCartao(12345, 25.00);
		PagamentoCartao pb1 = new PagamentoCartao(54321, 2500.00);
		
		pc1.processar();
		pb1.processar();

	}

}
