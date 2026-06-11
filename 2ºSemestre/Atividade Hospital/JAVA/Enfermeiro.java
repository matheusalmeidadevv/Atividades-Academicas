package br.senai.poo.listaREVISAO;

public class Enfermeiro extends ProfissionalSaude{

	public Enfermeiro(String nome, String crm) {
		super(nome, crm);
	}

	@Override
	public String getEspecialidade() {
		return "Enfermeiro";
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
