
public class Televisao {
	private int volume = 0;
	private boolean Logico = false;
	
	public boolean ligado() {
		
		Logico = !Logico;
		return Logico;
		
	}
	
	public int aumentarV() {
		
		if(Logico == true) {
		if(this.volume < 100) {
			volume += 5;
			return volume;
		}else {
			
			System.out.println("\nO volume já esta no maximo \nVolume atual: " + volume);
			return 0;
			
		}
		}else {
			
			System.out.println("\nA televisão esta desligada");
			
		}
		return volume;
	}
	
	public int diminuirV() {
		
		if(Logico == true) {
		if(this.volume > 0) {
			volume -= 5;
			return volume;
		}else {
			
			System.out.println("\nO volume já esta no minimo \nVolume atual: " + volume);
			return 0;
			
		}
		}
		else {
			
			System.out.println("\nA televisão esta desligada");
			
		}
		return volume;
		
	}
	
	public void exibirV() {
		
		System.out.println("\n\nO volume atual é: " + volume + "\nA Televisão esta: " + Logico);
	}
	
}
