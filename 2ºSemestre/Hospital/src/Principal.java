
public class Principal {
	public static void main(String[] args) {
		
		Hospital SantaHelena = new Hospital();
		
		MedicoAuxiliar MeA = new MedicoAuxiliar("22", "Jair Bolsonaru", 35, 5000);
		MedicoCirurgiao MeC = new MedicoCirurgiao("10", "Toguro", 45, 25000);
		
		
		SantaHelena.addMedico(MeA);
		SantaHelena.addMedico(MeC);
		
		SantaHelena.listarMedico();
		
		System.out.println(MeA.medicoAposentado());
		System.out.println(MeC.medicoAposentado());
		
		System.out.println(MeA.valorAposentadoria());
		System.out.println(MeC.valorAposentadoria());
		
		
		System.out.println(MeA.valorAposentadoria(300));
		System.out.println(MeC.valorAposentadoria(300));

		SantaHelena.removeMedico("22");
		SantaHelena.buscarMedico("10");
		
		Medico.getTotalMedicos();
	}
}
