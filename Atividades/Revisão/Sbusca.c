#include <stdio.h>

int sistema_buscaS() {
    // Implementação do sistema de busca sequencial

    int nums[10] = {2, 5, 4, 10, 7, 9, 8, 3, 6, 1};
    int chave;

    printf("Digite um numero de 1 a 10:\n");
    scanf(" %d", &chave);

    if(chave <11 && chave > 0){
        for(int i = 0; i <= nums[10]; i++){
            if(nums[i] == chave){
                printf("\nSeu numero esta na posição %d \n\n", i);
                break;
            }else if(nums[i] != chave){
                printf("\nnumero não encontrado!");
            }

        }
    }



    return 0;
}

int sistema_buscaB(){
    // Implementação do sistema de busca binaria

    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int chave;

    printf("Digite um numero de 1 a 10:\n");
    scanf(" %d", &chave);




}

int main() {
    
    int op = 0;

    while(op != 3){
    printf("Escolha qual sistema de busca você deseja usar: \n1-Sistema de busca sequencial \n2-Sistema de busca binario \n3-Sair\n");
    scanf(" %d", &op);
    getchar();

    
        switch(op){

            case 1:
            sistema_buscaS();
            break;

            case 2:
            sistema_buscaB();
            break;
            
            case 3:
            printf("\nFim do programa\n");
            break;

            default:
            printf("\nVocê digitou uma opção invalida");
            break;

        }
    }
    
    return 0;
}