
public class Livro {
	private String titulo, autor;
	private int paginas;
	
	public Livro(String titulo, String autor, int paginas) {
		
		this.autor = autor;
		this.titulo = titulo;
		this.paginas = paginas;
		
	}
	
	public String exibirDetalhes() {
		
		return "Livro: "+ titulo + " | Autor: "+ autor + " | Total de páginas: "+ paginas;
		
	}
}
