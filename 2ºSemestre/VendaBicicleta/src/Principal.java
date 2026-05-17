public class Principal {

    
	public static void main(String[] args) {
	
		Acessorio a1 = new Acessorio("Capacete", "GTS", "Forro acolchoado", 30);
		Bicicleta b1 = new Bicicleta("Gta" ,"Freeride", "rebel", 1200,  a1);
		
		Acessorio a2 = new Acessorio("Joelheira", "GTS", "Acrilico", 25);
		Bicicleta b2 = new Bicicleta("Gta" ,"Bike de montanha", "rebel", 1500,  a2);

		
		b1.desconto(20);
		System.out.println(b1);
		
		b2.desconto(20);
		System.out.println(b2);
	}
}
