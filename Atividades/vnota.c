/*
    Vetores nota maior e menor
     Data: 03/09/2025
     Colegas: Matheus Almeida Dos Santos, Leon Matheus Azevedo Gomes , Maria Luisa Magalhães Castro

*/



#include <stdio.h>

int main()
{
    int nota[5];
    char alunos[5][20];
    int indicemaior = 0, indicemenor = 0;
    int i, menor = 100, maior = -100;
    
    printf("Digite o nome e a nota de cinco alunos: \n");
    
    for(i = 0; i<5; i++){
        
        scanf("%s", alunos[i]);
        scanf("%d", &nota[i]);
        
        if(nota[i]>maior){
            
            maior = nota[i];
            indicemaior = i;
            
        }
        if(nota[i]<maior){
            menor = nota[i];
            indicemenor = i;
        }
        printf("\nAgora, digite o nome a nota do proximo aluno: \n");
    }
    printf("O aluno com a maior nota:%s\nE sua nota foi:%d\n\nO aluno com a menor nota foi %s\nE sua nota foi:%d ", alunos[indicemaior], maior, alunos[indicemenor], menor);
    
    
    return 0;
}