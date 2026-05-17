#include "global.h"


void consulta() {
  int indice_consultado;
  printf("FUNCAO CONSULTA PELO INDICE\n");
  printf("Informe o indice do aluno: ");
  scanf("%d", &indice_consultado);
  if( indice_consultado <= cadastrados ) {
    printf("Resultado da consulta:\n\n");
    printf("Matricula: %d\n", aluno[indice_consultado].matricula);
    printf("Nome: %s\n", aluno[indice_consultado].nome);
    printf("Curso: %s\n", aluno[indice_consultado].curso);
  } else {
    printf("ALERTA: Indice maior que %d\n", cadastrados);
  }
}