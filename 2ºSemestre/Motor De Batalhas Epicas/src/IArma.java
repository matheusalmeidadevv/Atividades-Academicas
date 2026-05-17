
public interface IArma {
	
	Armas arma = Armas.SemArma;
	
	public static int calcularDano() {
		
		if(arma == Armas.SemArma) {
			return 2;
		}
		else if(arma == Armas.Adaga) {
			return 5;
		}
		else if(arma == Armas.Espada) {
			return 10;
		}
		else if(arma == Armas.Cajado) {
			return 15;
		}
		else if(arma == Armas.Machado) {
			return 30;
		}
		else if(arma == Armas.Arco) {
			return 12;
		}
		else if(arma == Armas.EspadaGrande) {
			return 30;
		}
		return 0;
		
	}
}
