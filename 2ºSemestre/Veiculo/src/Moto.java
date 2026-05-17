
public class Moto extends Veiculo{
	
	private int cilindradas;
	
	public Moto(String marca, String modelo, int cilindradas) {
		
		super(marca, modelo);
		this.cilindradas = cilindradas;
		
	}
	
	@Override
	public String Buzina() {
		
		return "BLE BLE";
		
	}
	
	public String exibirInfo() {
		
		return "A moto da marca: " + marca + "\nDo modelo: " + modelo + "\nTem " + cilindradas + "cilindradas";
	}
	
}
