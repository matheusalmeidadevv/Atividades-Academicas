#include <stdio.h>

#define NUM_SENSORES 4

// --- Função que detecta vaga ---
int detectarVaga(int sensores[]) {
    for(int i = 0; i < NUM_SENSORES; i++) {
        if(sensores[i] == 1)
            return i;
    }
    return -1;
}

// --- Função que gira ---
void girarParaDirecao(char *direcao) {
    printf("Girando o carro para %s...\n", direcao);
}

// --- Função que estaciona ---
void estacionar() {
    printf("Movendo o carro para a vaga...\n");
    printf("Alinhando...\n");
    printf("Estacionado com sucesso!\n");
}

int main() {
    int sensoresAzul[NUM_SENSORES] = {0, 0, 0, 1}; 
    char *posicoes[NUM_SENSORES] = {"frente", "ré", "esquerda", "direita"};
    
    int vagaEncontrada = detectarVaga(sensoresAzul);
    
    if(vagaEncontrada != -1) {
        printf("Vaga azul detectada à %s!\n", posicoes[vagaEncontrada]);
        
        girarParaDirecao(posicoes[vagaEncontrada]);
        estacionar();
        
    } else {
        printf("Nenhuma vaga azul detectada. Continuando em frente...\n");
    }

    return 0;
}