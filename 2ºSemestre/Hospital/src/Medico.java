
public abstract class Medico {
	
	private String crm, nome;
	private int idade;
	private double salario;
	private static int totalMedicos = 0;
	
	public Medico(String crm, String nome, int idade, double salario) {
		super();
		
		totalMedicos++;
		this.crm = crm;
		this.nome = nome;
		this.idade = idade;
		this.salario = salario;
	}
	
	public abstract boolean medicoAposentado();
	
	public double valorAposentadoria() {
		return this.salario * 0.8;
	}
	public double valorAposentadoria( double bonus) {
		return this.salario * 0.8 + bonus;
	}

	public String getCrm() {
		return crm;
	}

	public void setCrm(String crm) {
		this.crm = crm;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int getIdade() {
		return idade;
	}

	public void setIdade(int idade) {
		this.idade = idade;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	public static int getTotalMedicos() {
		return totalMedicos;
	}

	public static void setTotalMedicos(int totalMedicos) {
		Medico.totalMedicos = totalMedicos;
	}

	@Override
	public String toString() {
		return "Medico [crm=" + crm + ", nome=" + nome + ", idade=" + idade + ", salario=" + salario + "]";
	}
	
	
	
	
	
}
