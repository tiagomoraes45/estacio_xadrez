#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando for
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }
    
    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Adicionando uma linha em branco para separar os movimentos do Cavalo
    printf("\n");

    // Movimento do Cavalo (2 casas para baixo, 1 para a esquerda) com loops aninhados
    int m = 0; // Contador para o loop externo
    for (m = 0; m < 2; m++) { // O Cavalo se move 2 casas para baixo
        printf("Baixo\n");
    }

    int n = 0; // Contador para o loop interno
    while (n < 1) { // O Cavalo se move 1 casa para a esquerda
        printf("Esquerda\n");
        n++;
    }

    return 0;
}
