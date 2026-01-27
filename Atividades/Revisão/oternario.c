#include <stdio.h>

int main(){
    // Declaração de variáveis
    int idade;
    char *resultado;

    // Solicitação de entrada do usuário
    printf("Qual a sua idade? \n");
    scanf("%d", &idade);

    // Operador ternário: verifica se idade >= 18
    // Se verdadeiro: retorna "Entrada permitida"
    // Se falso: retorna "Entrada Bloqueada"
    resultado = (idade >= 18) ? "Entrada permitida" : "Entrada Bloqueada";

    // Exibe o resultado da verificação
    printf(" %s", resultado);

    return 0;
}