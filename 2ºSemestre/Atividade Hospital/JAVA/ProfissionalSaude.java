package br.senai.poo.listaREVISAO;

public abstract class ProfissionalSaude implements IEscalavel{
	
	private String nome;
	private String crm;
	private SetorPlantaoEnum SetorPlantao;
	private static int profissionaisqtd = 0;
	
	public ProfissionalSaude(String nome, String crm) {
		
		this.nome = nome;
		this.crm = crm;
		profissionaisqtd++;
		
		
	}
	
	public abstract String getEspecialidade();
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCrm() {
		return crm;
	}

	public void setCrm(String crm) {
		this.crm = crm;
	}

	public SetorPlantaoEnum getSetorPlantao() {
		return SetorPlantao;
	}

	public void setSetorPlantao(SetorPlantaoEnum setorPlantao) {
		SetorPlantao = setorPlantao;
	}

	public Boolean podeSerEscalado() {
		
		return false;
		
	}

	@Override
	public String toString() {
		return "ProfissionalSaude [nome=" + nome + ", crm=" + crm + "Especialidade: " + getEspecialidade( ) + ", SetorPlantao=" + SetorPlantao + "]";
	}

	public static int getQtdProfissionais() {
		
		return profissionaisqtd;
		
	}
	
}
