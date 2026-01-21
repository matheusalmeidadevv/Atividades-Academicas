#include <stdio.h>

int resu(int N1, int N2, char letra)
{
    int Resultado;
    int Num = 100;
    Resultado = (N1 - N2) * 10;

    if (letra == 'N') {
        Resultado -= Num;
    }

    return Resultado;
}

int main(void) {
    int num1, num2;
    char letra;

    printf("Escreva um numero: ");
    scanf("%d", &num1);
    printf("Escreva outro numero: ");
    scanf("%d", &num2);
    printf("Escreva uma letra: ");
    scanf(" %c", &letra);  // espaço antes do %c é importante

    int resultado = resu(num1, num2, letra);

    printf("Sua nota foi: %d\n", resultado);

    return 0;
}