/*
2. Implementação no Guerreiro (Criatura)
Sua classe Guerreiro já é filha de Criatura. Agora, faça ela também implementar a interface: public class Guerreiro extends Criatura implements Melhoravel { ... }
No @Override do método darUpgrade(), faça ele aumentar o nível ou a força do guerreiro e imprimir uma mensagem.


*/


public class Guerreiro extends Criatura implements Melhoravel, Interagivel{
	
	private boolean escudo = false;
	
	public Guerreiro(String nome, int vida) {
		
		super(nome, vida);
		
	}
	
	public boolean getEscudo() {
		
		if(escudo == true) {
			
			return escudo;
			
		}else {
			System.out.println("\nSigurd Vida: " + (vida-5));
			return escudo;
			
		}
	}
		
	public void setEscudo(){
		
		this.escudo = !escudo;
		
	}
		
		
	
	
	@Override
	public void atacar() {
		
		System.out.println("Corte");
		
	}
	
	@Override
	public void darUpgrade() {
		
		
		System.out.println("\n\n O Guerreiro subiu de nivel!!! \n\n");
		
	}
	
	@Override
	public void interagir() {
		
		System.out.println("\nO guerreiro " + nome +" faz uma saudação!\n");		
	}
	
	

}
