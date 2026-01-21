// STTRUCT & CADASTRO
// DATA: 08.09.2025
//ALUNOS: ERICK AZEVEDO & JOÃO VICTOR DOS SANTOS

#include <stdio.h>
#include <conio.h>

// VARIÁVEL DE CONTROLE (REGISTRO):
#define QUANTIDADE_MÁXIMA 3
    
// ESTRUTURA - ALUNO:
struct registro{
int matricula; 
char nome [30];
char curso [30];
};
struct registro aluno[QUANTIDADE_MÁXIMA];

// VARIÁVEIS:
int lacos; 
int tentativas, opcao;
int cadastro = 0;

// VOID - ALUNO: 
void cadastrar_aluno(){
if ( cadastro+1 < QUANTIDADE_MÁXIMA){ 
cadastro += 1;

printf("\nMATRICULA: "); 
scanf("%d", &aluno[cadastro].matricula); 
printf("[%d] NOME: ",cadastro);
scanf("%s",aluno[cadastro].nome);
printf("CURSO: "); 
scanf("%s", aluno[cadastro].curso);
} else { 
 printf("LIMITE MÁXIMO!\n");  
}
}

// VOID - LISTAGEM:
void listagem (){
for (lacos = 1; lacos <= cadastro; lacos++){
printf("MATRICULA [%d] ALUNO: %d = %s : %s\n",aluno[lacos].matricula, lacos, aluno[lacos].nome, aluno[lacos].curso);
}
}

// VOID - CONSULTA
void consulta_indice(){
    int indice_consulta; 
    printf("INFORME A CONSULTA: "); 
    scanf("%d", &indice_consulta);
    
    if (indice_consulta <= cadastro){
    printf("\nMATRICULA: %d\n",aluno[indice_consulta].matricula);
    printf("NOME: %s\n", aluno[indice_consulta].nome);
    printf("CURSO: %s\n",aluno[indice_consulta].curso);
    }else{
        printf("\nINDICE NÃO REGISTRADO\n");
    }
}

// VOID - CONSULTA ALUNO
void consulta_aluno(){
int pesquisa_consulta; 

printf("INFORME A MÁTRICULA: ");
scanf("%d", &pesquisa_consulta);

for (lacos = 0; lacos <= cadastro; lacos++){
    if (pesquisa_consulta == aluno[lacos].matricula){
        printf("\nALUNO: %d | MÁTRICULA: %d | %s | %s\n", lacos,aluno[lacos].matricula,aluno[lacos].nome, aluno[lacos].curso);
    }
}
}

//VOID - ALTERAÇÃO DE CADASTRO
void alteracao(){
int pesquisa_consulta; 

    printf ("DIGITE AQUI A MÁTRICULA AQUI: "); 
    scanf ("%d", &pesquisa_consulta);

for (lacos = 0; lacos <= cadastro; lacos++){ 
     if (pesquisa_consulta == aluno[lacos].matricula){
    
    printf("\nALTERAÇÃO DE NOME: "); 
    scanf("%s", aluno[lacos].nome);
    
    printf("ALTERAÇÃO DE CURSO: "); 
    scanf("%s", aluno[lacos].curso);
}
}
}


int main()
{
 
 // REPETIÇÃO:
 while (opcao != 6){
 
 printf("\n========================================================================================================\n");
 printf("[1] CADASTRO - [2] LISTAGEM - [3] CONSULTA - [4] CONSULTA_ALUNO - [5] ALTERAÇÃO DE CADASTRO | [6] SAÍDA");
 printf("\n========================================================================================================\n");
 
 printf("ESCOLHA OPÇÃO: ");
 scanf("%d", &opcao); 
 
 // ESCOLHA;
 switch(opcao){
     case 1:
     printf("[CADASTRO] - ESCOLHIDO\n");
     cadastrar_aluno(); 
     
     break; 
     
     case 2:
     printf("[LISTAGEM] - ESCOLHIDA:\n");
     listagem(); 
     break; 
     
     case 3:
     printf("[CONSULTA] - ESCOLHIDA\n");
     consulta_indice(); 
     break;
     
     case 4:
     printf("[CONSULTA ALUNO] - ESCOLHIDA\n");
     consulta_aluno(); 
     break; 
     
     case 5: 
     printf("\n[ALTERAÇÃO DE CADASTRO - ESCOLHIDA]\n");
     alteracao();
     break;
     
     case 6: 
     printf("\n[SAÍDA]\n");
     break;
     
     default: 
     printf("\nOPÇÃO INVÁLIDA\n"); 
     break;

 }
 }
 return 0;
 
}