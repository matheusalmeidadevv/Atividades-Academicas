#include <stdio.h>
#include <string.h>

int multi(int *PA, int *PB) {

    
	*PA = *PA *= *PA;
	*PB = *PB *= *PB;


}

int main() {
	int A, B;

    printf("\n==== Valores iniciais ====\n");

	printf("Digite o primeiro numero: \n");
	scanf("%d", &A);
	printf("Digite o segundo numero: \n");
	scanf("%d", &B);

	multi( &A, &B);

    printf("\n==== Valores elevados ao quadrado ====\n");

	printf("\nO primeiro valor  %d", A);
	printf("\nO segundo valor  %d", B);

}