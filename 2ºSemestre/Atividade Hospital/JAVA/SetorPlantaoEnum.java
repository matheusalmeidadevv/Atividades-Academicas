package br.senai.poo.listaREVISAO;

public enum SetorPlantaoEnum {
	
	AMBULATORIO(10), EMERGENCIA(15);
	
	private Integer qtdMAX;
	
	SetorPlantaoEnum(Integer i) {
		
		qtdMAX = i;
		
		
	}
	
	public Integer getQuantidadeMAX() {
		
		return qtdMAX;
		
	}

}
