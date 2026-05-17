#include <stdio.h>
#include "global.h"
#include "cadastra_aluno.c"
#include "consulta.c" 
#include "altera.c"
#include "listagem.c"
#include "mensagem_final_programa.c"

int main() {

  cadastrados = -1;

  retorno = 0;

  while( retorno != 5 ) {


    switch(retorno)
    {
      case 1: cadastra_aluno(); break;
      case 2: consulta(); break;
      case 3: altera(); break;
      case 4: listagem(); break;
    }
  }
  mensagem_final_programa();
  return 0;
}