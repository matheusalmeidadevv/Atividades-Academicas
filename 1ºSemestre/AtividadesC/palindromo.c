#include <stdio.h>
#include <string.h>

char para_minusculo(char c) {
    
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c; 
}

void verificar(char *frase) {
    int i = 0;
    int j = strlen(frase) - 1;

    
    if (frase[j] == '\n') {
        frase[j] = '\0';
        j--;
    }

    int palindromo = 1; 

    while (i < j) {

        if (frase[i] == ' ') {
            i++;
            continue;
        }
        if (frase[j] == ' ') {
            j--;
            continue;
        }

        if (para_minusculo(frase[i]) != para_minusculo(frase[j])) {
            palindromo = 0;
            break;
        }

        i++;
        j--;
    }

    if (palindromo) {
        printf("\n'%s' eh um palindromo!\n", frase);
    } else {
        printf("\n'%s' nao eh um palindromo.\n", frase);
    }
}

int main() {
    char nome[40];
    printf("Digite seu nome completo:\n");
    fgets(nome, 40, stdin);
    verificar(nome);
    return 0;
}
