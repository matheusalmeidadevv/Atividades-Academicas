#include <stdio.h>

int main(){
    // Declaração de variáveis
    int n;
    char *resultado;

    // Solicitação de entrada do usuário
    printf("Digite um numero\nE irei verificar se é impar ou par:\n");
    scanf("%d", &n);

    // Operador ternário: verifica se o número é par ou impar
    // Se n % 2 == 0 (resto é 0): número é Par
    // Caso contrário (resto é 1): número é Impar
    resultado = (n % 2 == 0) ? "Par" : "Impar";

    // O operador % (módulo) retorna o RESTO de uma divisão Exemplo: 10 % 2 = 0 (resto 0), 11 % 2 = 1 (resto 1)

    // Exibe o resultado
    printf("%s", resultado);

    return 0;

}