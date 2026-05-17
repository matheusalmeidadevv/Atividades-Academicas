/*
    Vetores nota maior e menor
     Data: 03/09/2025
     Colegas: Matheus Almeida Dos Santos, Leon Matheus Azevedo Gomes , Maria Luisa Magalhães Castro

*/
#include <stdio.h>
#include <conio.h>

struct ficha
    {
    int nota[3];
    char alunos[3][20];
    
};

int main()
{
    
    struct ficha sala;
    
    int indicemaior = 0, indicemenor = 0;
    int i, menor = 100, maior = -100;
    
    printf("Digite o nome e a nota de tres alunos: \n");
    
    for(i = 0; i<3; i++){
        
        fflush(stdin);
        fgets(sala.alunos[i], 20, stdin);
        scanf("%d", &sala.nota[i]);
        getchar();
        
        if(sala.nota[i]>maior){
            
            maior = sala.nota[i];
            indicemaior = i;
            
        }
        if(sala.nota[i]<maior){
            menor = sala.nota[i];
            indicemenor = i;
        }
        printf("\nAgora, digite o nome a nota do proximo aluno: \n");
    }
    printf("O aluno com a maior nota: %sE sua nota foi:%d \n----\nO aluno com a menor nota foi %sE sua nota foi:%d ", sala.alunos[indicemaior], maior, sala.alunos[indicemenor], menor);
    
    
    return 0;
}