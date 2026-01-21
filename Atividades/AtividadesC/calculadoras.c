#include <stdio.h>
#include <string.h>

int calcular(int *P1, int *P2){
    
    *P1 = *P1 + *P2;
    
    printf("\nO RESULTADO FOI: %d", *P1);
    
}

int main(){
    int A, B;
    
    printf("BEM VINDO A SUA CALCULADORA \nVamos realizar somas simples pra você :)\n");
    printf("Digite o primeiro número: \n");
    scanf("%d", &A);
    printf("Agora digite o segundo número: \n");
    scanf("%d", &B);
    
    calcular(&A, &B);
    
    printf("\n O primeiro valor atualmente é: %d", A);
}