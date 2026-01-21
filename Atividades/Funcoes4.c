#include <stdio.h>

int Dados(char nome[20], int idade){
    if(idade > 0 && idade < 110){
        if(idade >= 18){
            printf("%s Você é maior de idade", nome);
        }
        else{
            printf("%s Você é menor de idade", nome);
        }
    }
    else{
        printf("Você digitou um numero invalido");
    }
}

int main()
{
    int idade;
    char nome[20];
    
    printf("Digite o seu nome: \n");
    scanf("%s", nome);
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    
    Dados(nome, idade);
    
}
