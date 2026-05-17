
public class Dragao extends Entidade{
	
	Especies especie;
	
	public Dragao(String nome, int nivel, Especies especie) {
		
		super(nome, nivel);
		this.especie = especie;
	}
	
	@Override
	public String Descricao(){
		
		return "\n =======Ficha do "+ especie  +" - " + nome + " -=======\n\n Nivel = " + nivel;
		
	}
	
}
