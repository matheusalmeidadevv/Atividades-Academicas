#include <stdio.h>

int calculo(int valor1,int valor2,char letra){
        int conta = (valor1 - valor2)*10;


        if (letra == 'N' || letra == 'n'){
        conta -= 100;

        }
    return conta;
}

int main(){

    int n1,n2;
    char letra;

    printf("Digite Valor1: ");
    scanf("%d", &n1);

    printf("Digite Valor2: ");
    scanf("%d", &n2);

    printf("Digite a letra 'N' ou 'n' para subtração: ");
    scanf(" %c", &letra);

    int resultado = calculo(n1,n2,letra);
    printf("Valor = %d\n", resultado);

    return 0;
}