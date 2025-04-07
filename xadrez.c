#include <stdio.h>

int main() {
    // ------------------- TORRE -------------------
    // Movimento: 5 casas para a DIREITA
    // Estrutura de repetição: FOR
    int i;
    printf("Movimento da TORRE:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita (casa %d)\n", i);
    }

    printf("\n"); // Linha em branco para separar

    // ------------------- BISPO -------------------
    // Movimento: 5 casas na diagonal para CIMA e DIREITA
    // Estrutura de repetição: WHILE
    int casasBispo = 1;
    printf("Movimento do BISPO:\n");
    while (casasBispo <= 5) {
        printf("Cima, Direita (casa %d)\n", casasBispo);
        casasBispo++;
    }

    printf("\n"); // Linha em branco para separar

    // ------------------- RAINHA -------------------
    // Movimento: 8 casas para a ESQUERDA
    // Estrutura de repetição: DO-WHILE
    int casasRainha = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda (casa %d)\n", casasRainha);
        casasRainha++;
    } while (casasRainha <= 8);

    return 0;
}
