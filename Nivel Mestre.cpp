#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // Chama recursivamente para mover mais uma casa
}

// Função recursiva para mover o Bispo
void moverBispo(int casasVertical, int casasHorizontal) {
    if (casasVertical <= 0 || casasHorizontal <= 0) return;
    printf("Cima Direita\n");
    moverBispo(casasVertical - 1, casasHorizontal - 1); // Chama recursivamente para mover em diagonal
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chama recursivamente para mover mais uma casa
}

// Função para o movimento do Cavalo (2 casas para cima e 1 para a direita)
void moverCavalo() {
    int i, j;
    for (i = 0; i < 2; i++) { // Loop para o movimento vertical (2 casas para cima)
        printf("Cima\n");
    }
    for (j = 0; j < 1; j++) { // Loop para o movimento horizontal (1 casa para a direita)
        printf("Direita\n");
    }
}

// Função para o movimento do Bispo com loops aninhados (vertical e horizontal)
void moverBispoComLoopsAninhados(int casasVertical, int casasHorizontal) {
    int i, j;
    for (i = 0; i < casasVertical; i++) { // Loop externo para o movimento vertical
        for (j = 0; j < casasHorizontal; j++) { // Loop interno para o movimento horizontal
            printf("Cima Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre (5 casas para a direita) usando recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando recursividade
    printf("Movimento do Bispo:\n");
    moverBispo(5, 5);
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo (2 casas para cima e 1 para a direita) usando loops aninhados complexos
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    // Movimento do Bispo com loops aninhados (vertical e horizontal)
    printf("Movimento do Bispo com Loops Aninhados:\n");
    moverBispoComLoopsAninhados(2, 1);  // Exemplo de 2 casas verticais e 1 horizontal
    printf("\n");

    return 0;
}
