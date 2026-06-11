package br.senai.poo.listaREVISAO;

public class TecnicoEnfermagem extends ProfissionalSaude{

	public TecnicoEnfermagem(String nome, String crm) {
		super(nome, crm);
	}

	@Override
	public String getEspecialidade() {
		
		String tipo = "Tecnico De Enfermagem";
		
		return tipo;
	}
	
	@Override
	public Boolean podeSerEscalado() {
		
		return true;
		
	} 
	
	@Override
	public String toString() {
		return "ProfissionalSaude [nome=" + getNome() + ", crm=" + getCrm() + "Especialidade: " + getEspecialidade( ) + ", SetorPlantao=" + getSetorPlantao() + ", Escalado: " + podeSerEscalado();
	}
	

}
