/*
 * 
 * 
 * 3. Implementação em uma nova família (Equipamento)
Crie uma classe chamada Escudo. Esta classe NÃO deve herdar de Criatura (pois um escudo não é um ser vivo, é um objeto).
Faça a classe Escudo implementar a interface Melhoravel.
No @Override do método darUpgrade(), faça ele aumentar a resistência do escudo.



*/


public class Equipamento implements Melhoravel {
	
	@Override
	public void darUpgrade() {
		
		System.out.println("\n\n O escudo subiu de nivel!!! \n\n");
		
		
	}
	

}
