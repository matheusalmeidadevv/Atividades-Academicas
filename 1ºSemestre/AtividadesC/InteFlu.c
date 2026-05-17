#include <stdio.h>
#include <string.h>

int main(){
    int I = 10;
    float F = 2.0;
    char C = 'M';
    
    int *PI;
    float *PF;
    char *PC;
    
    PI = &I;
    PF = &F;
    PC = &C;
    
    
    printf("O numero inteiro atualmente é %d\n", I);
    printf("O numero flutuante atualmente é %f\n", F);
    printf("O char atualmente é %c\n", C);
    
    *PI = 20;
    *PF = 5.0;
    *PC = 'A';
    
    printf("\n=========\n");
    
    printf("\nO numero inteiro atualmente é %d\n", I);
    printf("O numero flutuante atualmente é %f\n", F);
    printf("O char atualmente é %c\n", C);
    
}