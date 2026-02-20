// PILHA SIMPLES - Estrutura de dados LIFO (Last In, First Out)
// O último elemento adicionado é o primeiro a ser removido

#include <stdio.h>
#include <locale.h>
#define LC_ALL 0
#define MAX 5          

int pilha[MAX];        // Array que armazena os números
int topo = 0;         


// PUSH = Adicionar um número no topo da pilha
void push(){

    if(topo == MAX){
        printf("\nA pilha esta cheia\n");
        return;
    }

    printf("Qual numero você deseja colocar no topo?");
    scanf("%d", &pilha[topo]);        
    getchar();                         // Remove o '\n' deixado

    topo++;                            // Aumenta topo para a próxima posição

    printf("\nnumero incrementado com sucesso!\n");
}


// POP = Remover o número do topo da pilha
void pop(){
    
    if(topo == 0){
        printf("\nA pilha esta vazia\n");
        return;
    }

    printf("\nO ultimo numero da pilha foi retirado\n");
    topo--;                            // Diminui topo para apontar para o anterior
}

// CHECK = Exibir todos os números da pilha
int check(){
    int i;

    
    if(topo == 0){
        printf("\nA pilha esta vazia\n");
        return 0;
    }
    
    printf("Os valores da pilha são:\n");
    // Começa do último (topo-1) e volta até o primeiro
    for(i = topo - 1; i >= 0; i--){
        printf("%d \n", pilha[i]);
    }

    return 0;
}


// FUNÇÃO PRINCIPAL - Menu interativo
int main(){
    setlocale(LC_ALL, "Portuguese");    
    
    int op;  

    // Loop que mantém o programa rodando
    while(op != 4){

        printf("\nO que você deseja acessar: \n1-Colocar um numero na pilha \n2-Retirar um numero da pilha \n3-Exibir a pilha inteira \n4-Sair \n");
        scanf("%d", &op);
        
        
        switch(op){
            case 1:
                push();        
                break;
            case 2:
                pop();         
                break;
            case 3:
                check();       
                break;
            case 4:
                printf("Fim do programa");
                return 0;      
            default:
                printf("Você não digitou uma opção valida \n");
        }
    }
    return 0;
}