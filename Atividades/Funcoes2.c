#include <stdio.h>

int verifica(int N){
    if(N > 0){
        printf("Positivo");
    }
    if(N == 0){
        printf("Zero");
    }
    if(N < 0){
        printf("Negativo");
    }
}
int main(){
    
    int num;
    
    printf("Escreva um numero: ");
    scanf("%d", &num);
    verifica(num);
}
