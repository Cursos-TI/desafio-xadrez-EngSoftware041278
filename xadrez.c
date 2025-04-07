#include <stdio.h>

// ------------------- Função recursiva para TORRE -------------------
void moverTorre(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Direita (casa %d)\n", casaAtual);
    moverTorre(casaAtual + 1, totalCasas);
}

// ------------------- Função recursiva para RAINHA -------------------
void moverRainha(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Esquerda (casa %d)\n", casaAtual);
    moverRainha(casaAtual + 1, totalCasas);
}

// ------------------- Função recursiva + loops aninhados para BISPO -------------------
void moverBispo(int linha, int totalMovimentos) {
    if (linha > totalMovimentos) return;

    for (int coluna = 1; coluna <= 1; coluna++) {
        printf("Cima, Direita (movimento %d)\n", linha);
    }

    moverBispo(linha + 1, totalMovimentos);
}

// ------------------- Loops aninhados complexos para o CAVALO -------------------
void moverCavalo() {
    printf("Movimento do CAVALO:\n");

    for (int cima = 1; cima <= 2; cima++) {
        printf("Cima (passo %d)\n", cima);

        if (cima == 2) {
            for (int direita = 1; direita <= 1; direita++) {
                if (direita != 1) continue;  // só entra se for exatamente 1
                printf("Direita (passo 3)\n");
                break;  // quebra após o primeiro movimento à direita
            }
        }
    }
}

// ------------------- MAIN -------------------
int main() {
    // ------------------- TORRE -------------------
    printf("Movimento da TORRE:\n");
    moverTorre(1, 5);

    printf("\n");

    // ------------------- BISPO -------------------
    printf("Movimento do BISPO:\n");
    moverBispo(1, 5);

    printf("\n");

    // ------------------- RAINHA -------------------
    printf("Movimento da RAINHA:\n");
    moverRainha(1, 8);

    printf("\n");

    // ------------------- CAVALO -------------------
    moverCavalo();

    return 0;
}
