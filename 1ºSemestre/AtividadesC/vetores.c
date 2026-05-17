#include <stdio.h>

int main()
{
    int i;
    int idade[5];
    char nomes[5][20];
    
    printf("Bem vindo ao programa de cadastro dos alunos:\n");
    for(i = 0;i<=4;i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", nomes[i]);
        printf("Digite a idade desse aluno: ");
        scanf("%d", &idade[i]);
        
    }
    printf("\n");
    for(i = 0;i<=4;i++){
        printf("Nome do aluno: %s\n", nomes[i]);
        printf("Idade do aluno: %d\n", idade[i]);
    }
}