#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite um numero entre 0 e 2: ");
    scanf("%d", &numero);
    
    switch(numero){
        case 0:
        printf("Digitei o número ZERO\n");
        break;
        case 1:
        printf("Digitei o número UM\n");
        break;
        case 2:
        printf("Digitei o número DOIS\n");
        break;
        default:
        printf("Foi digitado um numero diferente dos possiveis: %d\n", numero);
        break;
    }
    printf("Fim do programa");
}