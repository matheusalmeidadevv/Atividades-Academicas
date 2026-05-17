
public class Aluno {

	private String nome;
	private double nota1, nota2;
	private Integer idade;
	
	public Aluno(String nome, double nota1, double nota2, Integer idade) {
		super();
		this.nome = nome;
		this.nota1 = nota1;
		this.nota2 = nota2;
		this.idade = idade;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Integer getIdade() {
		return idade;
	}

	public void setIdade(Integer idade) {
		this.idade = idade;
	}
	
	public double getNota1() {
		return nota1;
	}

	public void setNota1(double nota1) {
		this.nota1 = nota1;
	}
	
	public double getNota2() {
		return nota2;
	}

	public void setNota2(double nota2) {
		this.nota2 = nota2;
	}


	
	public double CalcularMedia() {
		
		return (nota1 + nota2) / 2;
		
	}
	
	public String situacao() {
		
		if(CalcularMedia() >= 7) {
			
			return "Aprovado";
			
		}else if(CalcularMedia() > 5) {
			
			return "Recuperação";
			
		}else {
			
			return "Reprovado";
			
		}
		
	}

	@Override
	public String toString() {
		return "\n\nAlunos \n\nNome:" + nome + "\nnota1:" + nota1 + "\nnota2:" + nota2 + "\nidade:" + idade + "\nMedia: " + CalcularMedia() + "\nSituação: " + situacao();
	}
	
}
