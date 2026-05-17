
public interface IEstrategiaDano {
	
	int danoBase = IArma.calcularDano() + Guerreiro.getForca();

		
	public default int cdanototal() {		
		
		return danoBase;
		
	}
}
