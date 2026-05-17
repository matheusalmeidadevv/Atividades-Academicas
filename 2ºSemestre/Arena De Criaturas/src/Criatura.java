/*
 * Desafio 2: Arena de Criaturas (RPG)
Este desafio foca em como diferentes tipos de "seres" se comportam em uma lista única.

A Base: Crie a classe abstrata Criatura. Todo mundo tem nome e vida (use protected para os filhos verem, mas o mundo externo não)
.
A Regra: Crie o método abstrato atacar().
Os Filhos: Crie um Dragao (que ataca com "Fogo") e um Guerreiro (que ataca com "Espada").
O Diferencial (Encapsulamento): O Guerreiro deve ter um atributo privado escudo. Crie um getter e um setter para ele
.
A Lista (Polimorfismo e Arrays): No seu método main, crie um Array de Criatura com 2 espaços
.
Coloque um Dragao na posição 0 e um Guerreiro na posição 1.
Use um loop for ou forEach para percorrer esse array e fazer cada criatura chamar seu método atacar()

 * */



public abstract class Criatura {
	
	protected String nome;
	protected int vida;
	
	public Criatura(String nome,int vida){
		
		this.nome = nome;
		this.vida = vida;
		
	}
	
	public abstract void atacar();
	
}
