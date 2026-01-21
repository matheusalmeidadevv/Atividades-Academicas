#include <stdio.h>
// Alunos: Matheus Almeida Dos Santos | LEON MATHEUS AZEVEDO GOMES

    char linha[255];
    FILE *ligacao;

void leitura() {

    ligacao = fopen("dados.txt", "r");

    printf("Mostra conteúdo do arquivo:\n");

    while (!feof(ligacao)) {
        fgets(linha, 255, ligacao);

        printf("%s", linha);
    }

    fclose(ligacao);

    }
void gravacao(){

    int cont;

    printf("Digite algo e pressione <enter>, Caso você queria sair pressione ctrl-z \n");
    ligacao = fopen("dados.txt", "a");

    while( fgets(linha, 255, stdin) != NULL){
    fputs(linha, ligacao);

    }

    fclose(ligacao);

}
int main() {
// criar menu com switch e case:
// 1 = gravacao
// 2 = leitura
// 3 = sair do programa

int op;

    printf("Teste de novo conteudo \n");

    while( op != 3){

    printf("\nEscolha uma das opções abaixo: \n1-Gravação \n2-Leitura \n3-Sair \n");
    scanf("%d", &op);
    switch(op){

    case 1:
        gravacao();
    break;

    case 2:
        leitura();
    break;

    case 3:
        fclose(ligacao);
    break;

    default:
        printf("Você digitou um número invalido!! ");
    break;
    }

    }

return 0;
}