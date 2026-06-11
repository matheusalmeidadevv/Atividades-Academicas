package br.senai.poo.listaREVISAO;
import java.util.ArrayList;

public class Principal {

	public static void main(String[] args) {
		
		Hospital HP = new Hospital("SantaHelena", "Ricardinho");
		
		Medico m1 = new Medico("Luciano", "1234504");
		Medico m2 = new Medico("Roberto", "3242523");
		TecnicoEnfermagem t1 = new TecnicoEnfermagem("Lucas", "1244744");
		
		HP.contratarProfissional(m1);
		HP.contratarProfissional(m2);
		HP.contratarProfissional(t1);
		HP.contratarProfissional("enfermeiro", "Mauricio", "431553");
		HP.contratarProfissional("enfermeiro", "Alex", "325678");
		
		
		
		HP.escalarProfissional("Lucas", SetorPlantaoEnum.EMERGENCIA);
		HP.escalarProfissional("Alex", SetorPlantaoEnum.EMERGENCIA);
		HP.escalarProfissional("Mauricio", SetorPlantaoEnum.EMERGENCIA);
		
		HP.escalarProfissional("Luciano", SetorPlantaoEnum.AMBULATORIO);
		HP.escalarProfissional("roberto", SetorPlantaoEnum.AMBULATORIO);
		
		System.out.println(HP.toString());
		
		HP.obterEscalacao();

		System.out.println(ProfissionalSaude.getQtdProfissionais());
		
		
	}

}
