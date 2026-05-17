
public class Soldado {
	
	protected String nome;
	protected String patente;
	
	public Soldado(String nome, String patente) {
		
		this.nome = nome;
		this.patente = patente;
	}
	
	public String Atuar() {
		
		return "Atuando";
		
	}
	
	public String cracha() {
		
		return "\n\nDados do Medico\nNome: " + nome + "\nPatente: "  + patente + "\nAtuação: " + Atuar();
		
	}

	
}
