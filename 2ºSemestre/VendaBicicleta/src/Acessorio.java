
public class Acessorio {
	
	private String tipo;
	private String marca;
	private String material;
	private double preco;
	
	public Acessorio(String tipo, String marca, String material, double preco) {
		
		this.marca = marca;
		this.material = material;
		this.tipo = tipo;
		setPreco(preco);
		
	}
	
public String getMarca() {
		
		return this.marca;
		
	}
	
	public void setMarca(String marca) {
		
		this.marca = marca;
	
	}
	
	public String getMaterial() {
		
		return this.material;
		
	}
	
	public void setMaterial(String material) {
		
		this.material = material;
	
	}
	public String getTipo() {
		
		return this.tipo;
		
	}
	
	public void setTipo(String tipo) {
		
		this.tipo = tipo;
	
	}
	public double getPreco() {
		
		return this.preco;
		
	}
	
	public void setPreco(double preco) {
		
		if(preco <= 0) {
			
			System.out.println("Valor invalido");
		
		}else {
			
		this.preco = preco;
		
		}
	}
	
	

	
}
