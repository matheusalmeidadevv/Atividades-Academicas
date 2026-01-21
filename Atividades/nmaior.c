#include <stdio.h>
#include <string.h>

int main(){
    int A, B;
    
    int *PA;
    int *PB;
    
    PA = &A;
    PB = &B;
    
    
    printf("Digite o primeiro número: \n");
    scanf("%d", PA);
    printf("\nDigite o segundo número: \n");
    scanf("%d", PB);
    
    if( A == B){
        printf("Os dois números são iguais");
    }
    
    
    else if(A >= B){
        printf("\nEsse é o maior número %d", A);
    }
    
    else{
        printf("\nEsse é o maior número %d", B);
    }
    
    
    
}