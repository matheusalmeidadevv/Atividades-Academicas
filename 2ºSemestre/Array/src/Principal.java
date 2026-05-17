import java.util.Scanner;

public class Principal {
	
	static Scanner tc = new Scanner(System.in);

	public static void main(String[] args) {
		
		int apr = 0, rec = 0, rep = 0;
		double ntgeral = 0, manota = 0, menota = 10;
		String melhoraluno = "", pioraluno = "";
		
		Aluno[] alunos = new Aluno[3];
		
		for(int i = 0; i<3; i++) {
			
			
			System.out.println("Digite o nome do " +(i+1)+ "º aluno:");
			String nome = tc.nextLine();
			System.out.println("Digite a idade de " +nome);
			int idade = tc.nextInt();
			System.out.println("Digite a nota 1 de " +nome);
			double nota1 = tc.nextDouble();
			System.out.println("Digite a nota 2 de " +nome);
			double nota2 = tc.nextDouble();
			
			Aluno aluno = new Aluno(nome, nota1, nota2, idade);
			alunos[i] = aluno;
			
			ntgeral += aluno.CalcularMedia();
			
			if(aluno.CalcularMedia() >= 7) {
				apr++;
			}
			else if(aluno.CalcularMedia() >= 5) {
				rec++;
			}
			else {
				rep++;
			}
			
			tc.nextLine();
		}
		
		ntgeral = ntgeral/alunos.length;
		
		for(int i = 0; i<alunos.length; i++) {
			
			if(alunos[i].CalcularMedia() >= manota) {
				manota = alunos[i].CalcularMedia();
				melhoraluno = alunos[i].getNome();
			}
			if(alunos[i].CalcularMedia() <= menota) {
				menota = alunos[i].CalcularMedia();
				pioraluno = alunos[i].getNome();
			}
		
			System.out.println(alunos[i]);
		
		}
		
		System.out.println("\n\n Desempenho dos alunos \n\nNota geral da turma:" + ntgeral + "\nQuantidade de alunos aprovados: " + apr + "\nQuantidade de alunos em recuperação: " + rec + "\nQuantidade de alunos reprovados: " + rep 
				+ "\nMaior nota foi de " + melhoraluno + " que foi: " + manota + "\nPior nota foi de " + pioraluno + " que foi: " + menota);
		
		
		}

}
