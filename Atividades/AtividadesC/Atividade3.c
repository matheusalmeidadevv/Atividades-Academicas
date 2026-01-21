#include <stdio.h>
int numero;

int main()
{
    
    printf ("Escolha um número: ");
    scanf ("%d", &numero);

        if (numero > 0)
    printf ("POSITIVO");

        if (numero < 0)
    printf("NEGATIVO");

    if (numero == 0)
    printf("NEUTRO");

    return 0;
}