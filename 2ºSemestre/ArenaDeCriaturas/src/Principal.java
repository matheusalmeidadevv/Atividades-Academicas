/*
 * 4. O Teste no Main (Polimorfismo de Interface)
No seu main, tente fazer o seguinte:
Crie um objeto Guerreiro e um objeto Escudo.
Crie uma lista (ou chame um por um) e use o método darUpgrade() em ambos.
 * 
 * */

import java.util.ArrayList;


public class Principal {

	public static void main(String[] args) {
		
		Dragao Fafnir = new Dragao("Fafnir", 100);
		Guerreiro Sigurd = new Guerreiro("Sigurd", 50);
		Equipamento Escudo = new Equipamento();
		Bau bau = new Bau();
		
	ArrayList<Criatura> Criaturas = new ArrayList<Criatura>();
	ArrayList<Interagivel> listaInteracao = new ArrayList<Interagivel>();
	
	
	listaInteracao.add(Sigurd);
	listaInteracao.add(bau);
	
	
	
	Criaturas.add(Fafnir);
	Criaturas.add(Sigurd);
	
	for(Criatura c: Criaturas) {
		
		c.atacar();
		c.atacar();
		
		
	}
	
	for(Interagivel  lista : listaInteracao) {
		
		lista.interagir();
		
	}

	}

}
