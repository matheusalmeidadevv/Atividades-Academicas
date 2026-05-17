
public interface DanoCritico extends IEstrategiaDano {
	
	public default int danoBase() {
		
		return cdanototal() * 2;
		
	}
	
}
