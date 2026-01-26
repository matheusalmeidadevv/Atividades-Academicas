#include   <stdio.h>

int main(){
    
    //Variaveis do array
    int tamanho = 10;
    int posib[tamanho];

    //Preenche as 100 posições do array:
    for(int i = 0; i < tamanho; i++){
        posib[i] = i + 1;
    }       

    //Variaveis da pesquisa
    int baixo = 0;
    int alto = tamanho - 1;     //Precisa ser o tamanho do array -1 por conta do indice do array terminar em 99 e não 100, ou seja a posição mais alta é 99
    int meio, item;

    //Solicita um numero ao usuario
    printf("Me fale o numero que deseja buscar:\n");
    scanf(" %d", &item);

    
    while (baixo <= alto){
        meio = (baixo + alto)/2;    //Define o meio somando o indice mais alto, o mais baixo e dividindo por 2. Isso ocorre toda vez que o WHILE roda        

        if(posib[meio] == item){    //Verifica se o item é igual ao numero na posição do meio
            printf(" A posição é: %d \n", meio);    //Se for retorna o meio = posição do item
            break;            
        }

        if(posib[meio] < item){     //Verifica se o item é maior que o numero da posição do meio
            baixo = meio + 1;
        }
        
        if(posib[meio] > item){    //Verifica se o item é menor que o numero da posição do meio
            alto = meio - 1;
        }

       
    }
    
    if (baixo > alto) {
        printf("Item não encontrado.\n");
    }

    return 0;

}