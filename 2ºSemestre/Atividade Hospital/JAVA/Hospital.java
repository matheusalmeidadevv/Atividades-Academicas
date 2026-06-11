package br.senai.poo.listaREVISAO;

import java.util.ArrayList;

public class Hospital {

	private String nome;
	private String nomeCoordenador;
	private ArrayList<ProfissionalSaude> listaprofissionais = new ArrayList<ProfissionalSaude>();
	private ArrayList<ProfissionalSaude> escalados = new ArrayList<ProfissionalSaude>();

	public Hospital(String nome, String Coordenador) {
		
		this.nome = nome;
		this.nomeCoordenador = Coordenador;
		
	}
	
	public String getNome() {
		return nome;
	}



	public void setNome(String nome) {
		this.nome = nome;
	}



	public String getNomeCoordenador() {
		return nomeCoordenador;
	}



	public void setNomeCoordenador(String nomeCoordenador) {
		this.nomeCoordenador = nomeCoordenador;
	}



	//Nesse você cria o objeto e já contrata ele
	public void contratarProfissional(String tipo, String nome, String crm) {
				
		if(tipo.equalsIgnoreCase("Medico")) {
			
			ProfissionalSaude m = new Medico(nome, crm);
			listaprofissionais.add(m);
			System.out.println("Medico contratado");
			
		}else if(tipo.equalsIgnoreCase("Tecnico De Enfermagem")) {
			
			ProfissionalSaude t = new TecnicoEnfermagem(nome, crm);
			listaprofissionais.add(t);
			System.out.println("Tecnico De Enfermagem contratado");
			
		}else if(tipo.equalsIgnoreCase("Enfermeiro")) {
			
			ProfissionalSaude e = new Enfermeiro(nome, crm);
			listaprofissionais.add(e);
			System.out.println("Enfermeiro contratado");
			
		}
		
	}
	
	//Nesse você precisa criar o objeto profissional antes e só depois você contrata ele com isso aqui
	public void contratarProfissional(ProfissionalSaude p) {
		
		if(listaprofissionais == null) {
			
			return;
			
		}else {
		for(ProfissionalSaude t :  listaprofissionais) {
			
			if(t.getCrm().equals(p.getCrm())) {
				return;
			}
			
		}
		}
		listaprofissionais.add(p);
		
	}
	
	private ProfissionalSaude buscarProfissional(String nome) {
		
		if(listaprofissionais == null) {
			
			return null;
			
		}else {
		for(ProfissionalSaude p: listaprofissionais) {
			
			if(p.getNome().equalsIgnoreCase(nome)) {
				
				return p;
				
			}
			
		}
		}
		return null;
		
	}
	
	private ProfissionalSaude buscarProfissionalEscalado(String crm) {
		
		for(ProfissionalSaude p: escalados) {
			
			if(p.getCrm().equalsIgnoreCase(crm)) {
				
				return p;
				
			}
			
		}
		return null;
		
	}
	
	private Integer qtdProfissionais(SetorPlantaoEnum SetorPlantao) {
	    Integer qtd = 0;
	    for(ProfissionalSaude p : escalados) {
	        if(p.getSetorPlantao().equals(SetorPlantao)) {
	            qtd++;
	        }
	    }
	    return qtd;
	}	
	public Boolean escalarProfissional(String nome, SetorPlantaoEnum SetorPlantao) {
		
		ProfissionalSaude p = buscarProfissional(nome);
			
		if(p != null) {
			if(qtdProfissionais(SetorPlantao) == null) {
				return false;
			}else if(qtdProfissionais(SetorPlantao).equals(SetorPlantao.getQuantidadeMAX())) {
				for(ProfissionalSaude pt : escalados) {
					if(pt.getNome().equalsIgnoreCase(nome)) {
						return false;
					}

					
				}
			}
			p.setSetorPlantao(SetorPlantao);
			escalados.add(p);
			return true;
		}
		
		
		return false;
	}
	
	public Boolean removerProfissional(String crm) {
		
		ProfissionalSaude pt = buscarProfissionalEscalado(crm);
		
		 if(buscarProfissionalEscalado(crm)!= null) {
			 
			 escalados.remove(pt);
			 return true;
			 
		 }	
		 
		 return false;
		
	}
	
	public void obterEscalacao() {
		System.out.println("Profissionais escalados");
		
		for(ProfissionalSaude p : escalados) {
			
			System.out.println(p);
			
		}
		
	}

	@Override
	public String toString() {
		return "Hospital [nome=" + nome + ", nomeCoordenador=" + nomeCoordenador + ", listaprofissionais="
				+ listaprofissionais + ", escalados=" + escalados + "]";
	}
	
	
		
}
