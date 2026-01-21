#include "global.h"

void listagem() {

  printf("\nLISTAGEM alunos\n");
  for( laco = 0; laco <= cadastrados; laco++ ) {
    printf(
      "Aluno %d = matricula %d : %s : %s\n",
      laco,
      aluno[laco].matricula,
      aluno[laco].nome,
      aluno[laco].curso);
  }
}
