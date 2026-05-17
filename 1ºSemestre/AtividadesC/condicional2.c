#include <stdio.h>

int main() {
	int a, b = 0;
	
	printf("Digite um numero: \n");
	scanf("%d", &a);
	
	int soma = (a > 7) ? b + 5 : b;
	
	printf("O valor de B é %d", soma);
    
}