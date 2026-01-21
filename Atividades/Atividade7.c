// REGISTRO DE IDENTIFICADOR DE MAIOR IDADE 
// ALUNO: Matheus Almeida Dos Santos
//29.08.2025
#include <stdio.h>

int main()
{
 char nome[10];
 int idade, ano, ano_atual, identificador;
 
 ano_atual = 2025; 
 
 
 printf("\n============================\n");
  printf("IDENTIFICADOR DE MAIOR IDADE");
  printf("\n============================\n");
 
 printf("Digite seu nome: ");
 scanf("%s", nome);
 
 printf("Data de nascimento: ");
 scanf("%d", &ano);
 
 identificador = (ano_atual - ano);
 printf("Aqui está a sua idade: %d", identificador);
 
 if ((identificador < 0) || (identificador > 135)){
     printf("\n\nIDADE INVÁLIDA - ANOMALIA DE %d ANOS DE IDADE!", identificador);
 }else{
     if(identificador >= 18){
     printf("\n\nVOCÊ DE MAIOR!");
     }else{
         if(identificador < 18);
         printf("\n\nVOCÊ É DE MENOR!");
     }
 }

    return 0;
}