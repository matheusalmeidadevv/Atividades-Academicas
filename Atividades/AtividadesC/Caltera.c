#include <stdio.h>

/*  Cadastro de alunos
    Nome do aluno: Matheus ALmeida Dos Santos
*/
#define MAXIMO_ALUNOS 3

struct ficha_do_aluno {
  int  matricula;
  char nome[20];
  char curso[20];
};

struct ficha_do_aluno aluno[MAXIMO_ALUNOS];

int cadastrados = -1;
int laco;

void cadastra_alunos() {
  if( cadastrados+1 < MAXIMO_ALUNOS ) {
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

void listagem_alunos() {
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



void consulta_aluno_indice() {
  int indice_consultado;
  printf("FUNCAO CONSULTA PELO INDICE\n");
  printf("Informe o indice do aluno: ");
  scanf("%d", &indice_consultado);
  if( indice_consultado <= cadastrados ) {
    printf("Resultado da consulta:\n");
    printf("Matricula: %d\n", aluno[indice_consultado].matricula);
    printf("Nome: %s\n", aluno[indice_consultado].nome);
    printf("Curso: %s\n", aluno[indice_consultado].curso);
  } else {
    printf("ALERTA: Indice maior que %d\n", cadastrados);
  }
}


void consulta_aluno_matricula() {
  int pesquisa_matricula;
  printf("CONSULTA aluno pela matricula\n");
  printf("Informe a matricula: ");
  scanf("%d", &pesquisa_matricula);

  for( laco = 0; laco <= cadastrados; laco++ ) {
     if( pesquisa_matricula == aluno[laco].matricula ) {
      printf(
        "Aluno %d = matricula %d : %s : %s\n",
        laco,
        aluno[laco].matricula,
        aluno[laco].nome,
        aluno[laco].curso
      );
    }
  }

}

void altera_aluno_matricula(){
    int op;

    printf("Digite o número da matricula: ");
    scanf("%d", &op);
    
    for(laco = 0; laco <= cadastrados; laco++){
        if(op == aluno[laco].matricula){

        printf("Certo, iremos alterar o nome de %s pra qual nome?", aluno[laco].nome);
        scanf("%s", aluno[laco].nome);

        printf("E iremos alterar pra qual curso?");
        scanf("%s", aluno[laco].curso);

        }
    }
}


int main() {
  int opcao = 0;

  // enquanto a opcao for diferente de 3
  while( opcao != 6 ) {
    printf("\nMenu de opcoes:\n");
    printf("1 = cadastrar\n");
    printf("2 = listagem\n");
    printf("3 = consulta\n");
    printf("4 = consulta matricula\n");
    printf("5 = altera matricula\n");
    printf("6 = sair\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
      case 1:
        cadastra_alunos();
        break;
      case 2:
        listagem_alunos();
        break;
      case 3:
        consulta_aluno_indice();
        break;
      case 4:
        consulta_aluno_matricula();
        break;
      case 5:
        altera_aluno_matricula();
        break;
      case 6:
        printf("\nAêêêêêê\n");
        break;
      default:
        printf("Opção inválida\n");
        break;
    }
  }

  printf("O programa terminou. EBAAAAA!");
  return 0;
}
