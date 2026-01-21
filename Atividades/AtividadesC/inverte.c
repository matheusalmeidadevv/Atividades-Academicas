#include <stdio.h>
#include <string.h>

int inverte(int *PA, int *PB){
    
    int Temp = *PA;
    *PA = *PB;
    *PB = Temp;
    
    
}

int main(){
    int A = 43, B = 50;

    printf("\n==== Valores iniciais ====\n");
    
    printf("O primeiro valor é %d", A);
    printf("\nO segundo valor é %d", B);
    
    inverte( &A, &B);

    printf("\n==== Valores invertidos ====\n");
    
    printf("\nO primeiro valor é %d", A);
    printf("\nO segundo valor é %d", B);

}