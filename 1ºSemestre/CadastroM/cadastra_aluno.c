#include "global.h"


void cadastra_aluno(){

    if( cadastrados + 1 < MAXIMO_ALUNOS ) {

      cadastrados += 1;
      printf("\nCADASTRA alunos\n");
      printf("Matricula: ");
      scanf("%d", &aluno[cadastrados].matricula);
      printf("Nome %d : ", cadastrados);
      scanf("%s", aluno[cadastrados].nome);
      printf("Curso %d : ", cadastrados);
      scanf("%s", aluno[cadastrados].curso);
  } else {

      printf("ALERTA: Chegou ao limite de alunos = %d\n", MAXIMO_ALUNOS);
  }

}