#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED
#define MAXIMO_ALUNOS 3

int opcao;

struct ficha_do_aluno {
  int  matricula;
  char nome[20];
  char curso[20];
};

struct ficha_do_aluno aluno[MAXIMO_ALUNOS];

int cadastrados;
int retorno;
int laco;

#endif // GLOBAL_H_INCLUDED