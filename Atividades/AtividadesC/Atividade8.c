#include <stdio.h>

int main(){
    int opcao;
    
    printf("Bem vindo ao serviço de operadora, por favor selecione uma das opções abaixo: \n1-CLARO \n2-TIM \n3-VIVO \n4-OI \n ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            char cidade1[30];
            printf("Bem vindo a operadora CLARO\n");
            printf("Por favor digite sua cidade: \n");
            scanf("%s", cidade1);
            printf("Certo, iremos ti encaminhar para a operadora da sua região\nAguarde no programa");
            break;
        
        case 2:
            char cidade2[30];
            printf("Bem vindo a operadora TIM\n");
            printf("Por favor digite sua cidade: \n");
            scanf("%s", cidade2);
            printf("Certo, iremos ti encaminhar para a operadora da sua região\nAguarde no programa");
        break;
        
        case 3:
            char cidade3[30];
            printf("Bem vindo a operadora VIVO\n");
            printf("Por favor digite sua cidade: \n");
            scanf("%s", cidade3);
            printf("Certo, iremos ti encaminhar para a operadora da sua região\nAguarde no programa");
        break;
        
        case 4:
            char cidade4[30];
            printf("Bem vindo a operadora OI\n");
            printf("Por favor digite sua cidade: \n");
            scanf("%s", cidade4);
            printf("Certo, iremos ti encaminhar para a operadora da sua região\nAguarde no programa");
        break;
        
        default:
            printf("Você digitou nenhuma opção valida");
        break;
    }
}
