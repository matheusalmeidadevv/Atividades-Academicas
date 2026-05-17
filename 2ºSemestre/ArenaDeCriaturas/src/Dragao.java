/*Os Filhos: Crie um Dragao (que ataca com "Fogo") e um Guerreiro (que ataca com "Espada").
O Diferencial (Encapsulamento): O Guerreiro deve ter um atributo privado escudo. Crie um getter e um setter para ele
.
 * */


public class Dragao extends Criatura{

	public Dragao(String nome, int vida){
		
		super(nome, vida);
		
	}
	
	@Override
	public void atacar() {
		
		System.out.println("FOGO");
		
	}

}
