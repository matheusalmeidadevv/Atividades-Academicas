#include <stdio.h>

double media(double N1, double N2, double N3, char letra)
{
    double Resultado;
    int Num = 1;
    Resultado = (N1 + N2 + N3) / 3;

    Resultado += (letra == 'A') ? Num : 0;

    return Resultado;
}

int main(void) {
    double unid1, unid2, unid3;
    char letra;

    printf("Escreva sua nota da primeira unidade: ");
    scanf("%le", &unid1);
    printf("Escreva sua nota da segunda unidade: ");
    scanf("%le", &unid2);
    printf("Escreva sua nota da Terceira unidade: ");
    scanf("%le", &unid3);
    printf("Escreva uma letra: ");
    scanf(" %c", &letra);  // espaço antes do %c é importante

    double resultado = media(unid1, unid2, unid3, letra);

    printf("Sua nota foi: %le\n", resultado);

    return 0;
}
