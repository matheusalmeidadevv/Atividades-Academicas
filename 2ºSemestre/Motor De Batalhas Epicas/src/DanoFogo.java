public interface DanoFogo extends IEstrategiaDano {
	
	public default int danoBase() {
		
		return cdanototal() + 10;
		
	}
	
}
