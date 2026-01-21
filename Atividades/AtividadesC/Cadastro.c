#include <stdio.h>
#include <conio.h>

/*
    Programa de cadastro de alunos com vetores.
  Data: 08/09/2025
  Equipe: Matheus Almeida Dos Santos, Leon Matheus Azevedo Gomes , Maria Luisa Magalhães Castro
  Tarefa: Alterar o programa para funcionar com STRUCT

*/


int cadastrados = -1;

struct registro{
    char nome[50];
    int idade;
    char curso[30];
};

struct registro dados[10];

int cadastro(){

    cadastrados += 1;
    
    printf("\n-------------\n");
    printf("\nBEM VINDO AO CADASTRO DOS ALUNOS\n");
    
    printf("Digite o nome do aluno: ");
    scanf("%s", dados[cadastrados].nome);
    printf("Digite a idade de %s: ", dados[cadastrados].nome);
    scanf("%d", &dados[cadastrados].idade);
    printf("Digite o curso desse aluno: ");
    scanf("%s", dados[cadastrados].curso);
    
    printf("Cadastro Nº%d feito\n", cadastrados);
    
}

int lista(){
    
    int op;
    
    printf("\n-------------\n");
    printf("\nBEM VINDO A LISTAGEM DE ALUNOS\n");

    for(op = 0; op <= cadastrados; op++){
            printf("\nCadastro Nº%d \nAluno:%s \nIdade:%d \nCurso:%s\n", op, dados[op].nome, dados[op].idade, dados[op].curso);
        }
    }


int main()
{
    
    int op;
        
        while(op != 3){
            
        printf("\n\nESCOLHA UMA DAS OPÇÕES ABAIXO:\n1-Cadastro de alunos\n2-Lista dos alunos\n3-SAIR\n");
        scanf("%d", &op);
        
        
            switch(op){
                
                case 1:
                cadastro();
                break;
                
                case 2:
                lista();
                break;
                
                case 3:
                printf("Você saiu do programa\n");
                break;
                
                default:
                printf("Opção invalida");
                break;
            }
        }
        printf("AEEE MINHA GENTE");
    return 0;
}