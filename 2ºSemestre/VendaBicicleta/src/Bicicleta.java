
public class Bicicleta {
	
	private String marca;
	private String modelo;
	private String tipo;
	private double valor, vDesconto;
	private Acessorio acessorio;
	 
	
	public Bicicleta(String marca, String modelo, String tipo, double valor, Acessorio acessorio) {
		
		this.marca = marca;
		this.modelo = modelo;
		this.tipo = tipo;
		setValor(valor);
		this.acessorio = acessorio;
		
	}
	
	public String getMarca() {
		
		return this.marca;
		
	}
	
	public void setMarca(String marca) {
		
		this.marca = marca;
	
	}
	
	public String getModelo() {
		
		return this.modelo;
		
	}
	
	public void setModelo(String modelo) {
		
		this.modelo = modelo;
	
	}
	public String getTipo() {
		
		return this.tipo;
		
	}
	
	public void setTipo(String tipo) {
		
		this.tipo = tipo;
	
	}
	public double getValor() {
		
		return this.valor;
		
	}
	
	public void setValor(double valor) {
		
		if(valor <= 0) {
			
			System.out.println("Valor invalido");
		
		}else {
			
		this.valor = valor;
		
		}
	}
	
	public double valorTotal() {
		
		double vt = this.valor + acessorio.getPreco();
		
		return vt;
		
	}
	
	public double desconto(double Desc) {
		
		vDesconto = (getValor() * Desc)/100;
		
		return vDesconto;
		
	}
	
	@Override
	public String toString() {
		
		return "Bicicleta da marca " + marca + " do Modelo " + getModelo() + "do tipo " + getTipo() + 
				"\nCom um " + acessorio.getTipo() + " da marca " + acessorio.getMarca() + " de " + acessorio.getMaterial() + 
				"\nFicou de " + valorTotal() + "\nCom desconto de " + vDesconto;
	}

}
