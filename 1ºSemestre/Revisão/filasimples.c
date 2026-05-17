// Fila Simples - Operações FIFO

#include <stdio.h>
#include <locale.h> // Biblioteca que faz a correção nos acentos

#define LC_ALL 0   // Para a biblioteca locale.h funcionar
#define MAX 5

// Variáveis da fila
int fila[MAX];
int inicio = 0;
int total = 0;
int fim = 0;


// Adiciona elemento à fila
void enqueue(){
    if(total == MAX){
        printf("A fila esta cheia");
        return;
    }

    printf("Qual numero vocÃª deseja colocar?\n");
    scanf("%d", &fila[total]);
    getchar();

    fim++;
    total++;
}


// Remove elemento do início da fila
void dequeue(){
    if(total == 0){
        printf("A fila esta vazia");
        return;
    }

    printf("Primeiro numero da fila retirado\n");
    inicio++;
    total--;
}


// Exibe todos os elementos da fila
int queue(){
    int i = inicio;
    for(i; i < fim; i++){
        printf("%d \n", fila[i]);
    }
    return 0;
}



// Menu principal
int main(){
    setlocale(LC_ALL, "Portuguese");    //Setando ela como portugues
    
    int op;

    while(op != 4){
        printf("\nO que você deseja acessar: \n1-Colocar um numero na fila \n2-Retirar um numero da fila \n3-Exibir a fila inteira \n4-Sair \n");
        scanf("%d", &op);
        getchar();
        
        switch(op){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                queue();
                break;
            case 4:
                printf("Fim do programa");
                return 0;
            default:
                printf("Você nÃ£o digitou uma opÃ§Ã£o valida \n");
        }
    }
    return 0;
}