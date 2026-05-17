
public class Atirador extends Soldado{
	
	public Atirador(String nome, String patente) {
		
		super(nome, patente);
		
	}
	
	@Override
	public String Atuar() {
		
		return "Bala voando";
		
	}
	
	@Override
	public String cracha() {
		
		return "\n\nDados do Atirador\nNome: " + nome + "\nPatente: "  + patente + "\nAtuação: " + Atuar();
		
	}

	
}
