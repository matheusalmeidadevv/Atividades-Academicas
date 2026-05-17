#include <stdio.h>

float calcular_media (float nota1,float nota2,float nota3,char letra){
            float media = (nota1+nota2+nota3)/3;
            
            if(letra == 'A' || letra == 'a'){
            media += 1;
        }
    return media;
}

int main(){
    
    float n1,n2,n3;
    char letra;

    printf("Selecione o valor 1: ");
    scanf("%f", &n1);

    printf("Selecione o valor 2: ");
    scanf("%f", &n2);

    printf("Selecione o valor 3: ");
    scanf("%f", &n3);

    printf("Adicione 'A' ou 'a' para um bônus de média: ");
    scanf(" %c", &letra);

    float resultado = calcular_media(n1,n2,n3, letra);
    printf("Média = %.2f\n", resultado);
    
    
        return 0;
}