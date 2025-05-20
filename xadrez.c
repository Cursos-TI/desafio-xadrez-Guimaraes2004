#include <stdio.h>

// Constantes de movimento
#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8

int main() {
    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre (direita):\n");
    for (int i = 1; i <= PASSOS_TORRE; i++) {
        printf("Passo %d: direita\n", i);
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha (esquerda):\n");
    int j = 1;
    while (j <= PASSOS_RAINHA) {
        printf("Passo %d: esquerda\n", j);
        j++;
    }
    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal superior direita
    // Como o jogo só permite quatro direções básicas, vamos simular isso como uma combinação de "cima" + "direita"
    printf("Movimento do Bispo (diagonal superior direita):\n");
    int k = 1;
    do {
        printf("Passo %d: cima + direita\n", k);
        k++;
    } while (k <= PASSOS_BISPO);
    printf("\n");

    return 0;
}
