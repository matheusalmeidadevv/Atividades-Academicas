
public class AtributosFisicos {
	
	private int vida = 0, mana = 0, forca = 0;
		
	public AtributosFisicos(int vida, int mana,int forca) {
		
		this.vida = vida;
		this.mana = mana;
		this.forca = forca;
		
	}
	
	
	
	public int getVida() {
		return vida;
	}



	public void setVida(int vida) {
		this.vida = vida;
	}



	public int getMana() {
		return mana;
	}



	public void setMana(int mana) {
		this.mana = mana;
	}



	public int getForca() {
		return forca;
	}



	public void setForca(int forca) {
		this.forca = forca;
	}



	public String ToString() {
		
		return "\nGuerreiro Ficha:\n Vida = " + vida + "\n Mana = " + mana + "\n Força = " + forca;
		
	}

}
