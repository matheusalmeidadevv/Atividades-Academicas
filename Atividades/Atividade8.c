// REGISTRO DE OPERADORA 
// ALUNO: Matheus Almeida Dos Santos
//29.08.2025


#include <stdio.h>

int main()
{
char letra;
char nome[10];
int operadora;
char local [20];

printf("\n--=====================================--\n");
printf("  [1] - TIM - [2] - CLARO  - [3] - VIVO");
printf("\n--=====================================--\n");

printf("DIGITE SEU NOME: ");
scanf("%s", nome);

printf("ESCOLHA SUA OPERADORA: ");
scanf("%d", &operadora);

switch(operadora){
    case 1:
    printf("\nTIM FOI ESCOLHIDA!");
    
    printf("\n\nDIGITE 'Y' PARA CONFIRMAÇÃO E 'N' PARA CANCELAR: ");
    scanf(" %c", &letra);
        if((letra == 'y') || (letra == 'Y')){
        printf("CONFIRMADO");
        }else{
        if((letra == 'n') || (letra == 'N')){
        printf("CANCELADO");
        }else{
        printf("CONFIRMAÇÃO INVÁLIDA");
        }
        }
    break;
    
    case 2:
    printf("\nCLARO FOI ESCOLHIDA!");
    
        printf("\n\nDIGITE 'Y' PARA CONFIRMAÇÃO E 'N' PARA CANCELAR: ");
    scanf(" %c", &letra);
        if((letra == 'y') || (letra == 'Y')){
        printf("CONFIRMADO");
        }else{
        if((letra == 'n') || (letra == 'N')){
        printf("CANCELADO");
        }else{
        printf("CONFIRMAÇÃO INVÁLIDA");
        }
        }
    break;
    
    case 3:
    printf("\nVIVO FOI ESCOLHIDA!");
    
        printf("\n\nDIGITE 'Y' PARA CONFIRMAÇÃO E 'N' PARA CANCELAR: ");
    scanf(" %c", &letra);
        if((letra == 'y') || (letra == 'Y')){
        printf("CONFIRMADO");
        }else{
        if((letra == 'n') || (letra == 'N')){
        printf("CANCELADO");
        }else{
        printf("CONFIRMAÇÃO INVÁLIDA");
        }
        }
    break;
    
    default:
    printf("\nOPÇÃO INVÁLIDA");
}

printf("\n\nTAREFA FINALIZADA!");

    return 0;
    
}