import java.util.ArrayList;


public class Hospital {
	
	ArrayList<Medico> medicos = new ArrayList<Medico>();
	
	public void addMedico(Medico m) {
		
		medicos.add(m);
		
	}
	
	public void removeMedico(String crm) {
		
		int cont = 0;
		
		for(int i = 0; i < medicos.size(); i++) {
			
			if(medicos.get(i).getCrm().equalsIgnoreCase(crm)) {
				medicos.remove(i);
				cont++;
			}
			
		}
		if(cont != 0) {
			
			System.out.println("Medico removido");
			
		}
		else {
			
			System.out.println("Medico não encontrado");
			
		}
		
	}
	
	public void buscarMedico(String crm) {
		
		int cont = 0;

		
		for(int i = 0; i < medicos.size(); i++) {
			
			if(medicos.get(i).getCrm().equalsIgnoreCase(crm)) {
				System.out.println("Medico encontrado: \n" + medicos.get(i));
				cont++;
			}
			
		}
		
		
	}
	
	public void listarMedico() {
		
		
		for(int i = 0; i < medicos.size(); i++) {
			
			System.out.println("\n\n" + (i+1) + "º Medico: \n" + medicos.get(i));
			
		}
		
	}
	
}
