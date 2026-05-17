#include <stdio.h>
#include <stdlib.h>

int main(){
    char ingre1[20], ingre2[20], ingre3[20], nome[40];
    float valor1, valor2, valor3, total;
    
    printf("Digite o nome da receita: \n");
    scanf("%s", nome);
    printf("\nDigite o nome de um ingrediente: \n");
    scanf("%s", ingre1);
    printf("Digite o nome de outro: \n");
    scanf("%s", ingre2);
    printf("Digite o nome de outro: \n");
    scanf("%s", ingre3);
    
    printf("\nDigite o valor do primeiro ingrediente: \n");
    scanf("%f", &valor1);
    printf("Digite o valor do segundo ingrediente: \n");
    scanf("%f", &valor2);
    printf("Digite o valor do terceiro ingrediente: \n");
    scanf("%f", &valor3);
    
    total = valor1 + valor2 + valor3;
    
    printf("------ Receita de %s \nIngredientes da receita: \n\n -%s \n -%s \n -%s \n\nO valor total dessa receita ficou: R$%f", nome, ingre1, ingre2, ingre3, total);
    
}