#include <stdio.h>

int main() {
	
	char nome[50];
	int n1, situa;
	
	
	printf("Nome : \t");
	scanf("%s", nome);
	
	printf("Nota : \t");
	scanf("%d", &n1);
	
	
	situa = (n1 > 7) ? 1 : 0;
	
	if(situa == 1){
	    printf("Situação: Aprovado");
	}
	else{
	    printf("Situação: Reprovado");
	}
}