#include <stdio.h>
#define MAX 5

int fila[MAX];
int inicio = 0;
int total = 0;

void enqueue(){

    

    if(total == MAX){
        printf("A fila esta cheia");
        return;
        
    }

    printf("Qual numero você deseja colocar?\n");
    scanf("%d", &fila[total]);
    getchar();

    total++;
}

void dequeue(){

    if(total == 0){
        printf("A fila esta vazia");
        return;
    }

    printf("Primeiro numero da fila retirado\n");
    inicio ++;
    total--;
}

int queue(){
    
    int i;
    for(i = 0; i<total; i++){

        printf("%d \n", fila[i]);

    }

}


int main(){
    
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
            
            break;
                
            default:
                printf("Você não digitou uma opção valida \n");
            break;
        }

    }


}