
public class Principal {

	public static void main(String[] args) {
		
		
		Televisao controle = new Televisao();
		
		controle.exibirV();
		controle.ligado();
		controle.aumentarV();
		controle.aumentarV();
		controle.aumentarV();
		
		controle.exibirV();
		controle.ligado();
		controle.aumentarV();
		controle.ligado();
		
		controle.diminuirV();
		
		controle.exibirV();
	}

}
