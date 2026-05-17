
import java.util.ArrayList;

public class Empresa {
	
	public static void main(String[] args) {
	ArrayList<Funcionario> Funcionarios = new ArrayList<Funcionario>();
	
	Gerente G1 = new Gerente("Carlão", 3000);
	Desenvolvedor D1 = new Desenvolvedor("Matheus", 2000);
	
	G1.calcularSalario();
	D1.calcularSalario();
	
	Funcionarios.add(G1);
	Funcionarios.add(D1);
	
	for(Funcionario f : Funcionarios) {
		
		System.out.println(f.exibirDados());
		
	}
	
	
	}
}
