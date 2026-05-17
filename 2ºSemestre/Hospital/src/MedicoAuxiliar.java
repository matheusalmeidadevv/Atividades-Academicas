
public class MedicoAuxiliar extends Medico{

	public MedicoAuxiliar(String crm, String nome, int idade, double salario) {
		
		super(crm, nome, idade, salario);
		
	}

	@Override
	public boolean medicoAposentado() {
		
		return this.getIdade() >= 60;
		
	}

	@Override
	public String toString() {
		return "\n\nMedico Auxiliar \n\nNome: " + getNome() + "\nIdade: " + getIdade() + "\nSalario: " + getSalario() + "CRM: " + getCrm() + "Aposentado:" + medicoAposentado();
	}
	
}
