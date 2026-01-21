#include<stdio.h>

int adicao(){
    int N1, N2;
    printf("Digite dois numeros: ");
    scanf("%d\n", &N1);
    scanf("%d", &N2);
    
    int resultado = N1 + N2;
    printf("O resultado foi : %d\n", resultado);
}

int Subtracao(){
    int N1, N2;
    printf("Digite dois numeros: ");
    scanf("%d\n", &N1);
    scanf("%d", &N2);
    
    int resultado = N1 - N2;
    
    printf("O resultado foi : %d\n", resultado);
}

int Multiplicacao(){
    int N1, N2;
    printf("Digite dois numeros: ");
    scanf("%d\n", &N1);
    scanf("%d", &N2);
    
    int resultado = N1 * N2;
    printf("O resultado foi : %d\n", resultado);
}

int Divisao(){
    int N1, N2;
    printf("Digite dois numeros: ");
    scanf("%d\n", &N1);
    scanf("%d", &N2);
    
    int resultado = N1 / N2;
    printf("O resultado foi : %d\n", resultado);
}

int main(){
    int numero;
    
    printf("Digite um número dos numeros abaixo: \n1-Adição \n2-Subtração \n3-Multiplicação \n4-Divisão \n");
    scanf("%d", &numero);
    
    switch(numero){
        case 1:
            adicao();
        break;
        case 2:
            Subtracao();
        break;
        case 3:
            Multiplicacao();
        break;
        case 4:
            Divisao();
        break;
        
        default:
        printf("Foi digitado um numero diferente dos possiveis: %d\n", numero);
        break;
    }
    printf("Fim do programa");
}