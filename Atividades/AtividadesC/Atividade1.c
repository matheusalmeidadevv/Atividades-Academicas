#include <stdio.h>
#include <conio.h>

/*
Nome da função: multiplica
recebe como parâmetros dois valores inteiros (N1,N2)
Objetivo: multiplicar os valores recebido do parâmetros.
Retorno: um paâmetro inteiro (res) contendo resultado.
*/

int multiplicar (int N1,int N2){
    
    int resultado;
    resultado = N1 * N2;
    return(resultado);
}
/* -[Função Principal]- (main)*/
int main(void){
    int V1, V2, resultado;
    printf ("Digite o primeiro valor: ");
    scanf ("%d", &V1);
    printf ("Digite o segundo valor: ");
    scanf ("%d", &V2);

    // Chama a função e recebe o resultado
    resultado = multiplicar(V1,V2);

    printf ("Resultado = %d\n P A R A B É N S!", resultado);
    getch();
    return 0;
}