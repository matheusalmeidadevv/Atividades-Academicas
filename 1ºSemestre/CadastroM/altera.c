#include "global.h"

void altera(){
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