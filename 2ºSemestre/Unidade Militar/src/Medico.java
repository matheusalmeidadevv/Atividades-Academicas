
public class Medico extends Soldado {
	
	public Medico(String nome, String patente) {
		
		super(nome, patente);
		
	}
	
	@Override
	public String Atuar() {
		
		return "Calma karai to rilando kit";
		
	}
	
	@Override
	public String cracha() {
		
		return "\n\nDados do Medico\nNome: " + nome + "\nPatente: "  + patente + "\nAtuação: " + Atuar();
		
	}

	
}
