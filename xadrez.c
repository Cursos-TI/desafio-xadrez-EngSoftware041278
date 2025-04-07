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

    printf("\n");

    // ------------------- BISPO -------------------
    // Movimento: 5 casas na diagonal para CIMA e DIREITA
    // Estrutura de repetição: WHILE
    int casasBispo = 1;
    printf("Movimento do BISPO:\n");
    while (casasBispo <= 5) {
        printf("Cima, Direita (casa %d)\n", casasBispo);
        casasBispo++;
    }

    printf("\n");

    // ------------------- RAINHA -------------------
    // Movimento: 8 casas para a ESQUERDA
    // Estrutura de repetição: DO-WHILE
    int casasRainha = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda (casa %d)\n", casasRainha);
        casasRainha++;
    } while (casasRainha <= 8);

    printf("\n");

    // ------------------- CAVALO -------------------
    // Movimento: 2 casas para BAIXO + 1 casa para a ESQUERDA
    // Estrutura: FOR + WHILE (loops aninhados)
    int movimentos = 1; // número de vezes que o movimento completo será executado
    printf("Movimento do CAVALO:\n");

    for (int m = 1; m <= movimentos; m++) {
        int passosParaBaixo = 1;

        // Movimento de duas casas para BAIXO
        while (passosParaBaixo <= 2) {
            printf("Baixo (passo %d)\n", passosParaBaixo);
            passosParaBaixo++;
        }

        // Depois do movimento vertical, uma casa para a ESQUERDA
        printf("Esquerda (passo 3)\n");
    }

    return 0;
}
