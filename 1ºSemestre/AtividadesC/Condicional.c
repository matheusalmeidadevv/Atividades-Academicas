#include <stdio.h>

int main() {
	int a, b;
	
	printf("Digite dois numeros: \n");
	scanf("%d", &a);
	scanf("\n%d", &b);
	
	int menor = (a < b) ? a : b;
	int maior = (a > b) ? a : b;
	
	printf("O maior número é %d\n", maior);
	printf("O menor número é %d", menor);
}