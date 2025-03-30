#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para verificar se um navio pode ser posicionado nas coordenadas fornecidas
int pode_posicionar(int tabuleiro[][TAMANHO_TABULEIRO], int linha, int coluna, int orientacao) {
    if (orientacao == 0) { // Horizontal
        if (coluna + TAMANHO_NAVIO > TAMANHO_TABULEIRO) return 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha][coluna + i] != 0) return 0;
        }
    } else if (orientacao == 1) { // Vertical
        if (linha + TAMANHO_NAVIO > TAMANHO_TABULEIRO) return 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha + i][coluna] != 0) return 0;
        }
    } else if (orientacao == 2) { // Diagonal principal
        if (linha + TAMANHO_NAVIO > TAMANHO_TABULEIRO || coluna + TAMANHO_NAVIO > TAMANHO_TABULEIRO) return 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha + i][coluna + i] != 0) return 0;
        }
    } else if (orientacao == 3) { // Diagonal secundária
        if (linha + TAMANHO_NAVIO > TAMANHO_TABULEIRO || coluna - TAMANHO_NAVIO + 1 < 0) return 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha + i][coluna - i] != 0) return 0;
        }
    }
    return 1;
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona os navios
    // Navio horizontal
    int linha_horizontal = 2, coluna_horizontal = 3;
    if (pode_posicionar(tabuleiro, linha_horizontal, coluna_horizontal, 0)) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_horizontal][coluna_horizontal + i] = 3;
        }
    }

    // Navio vertical
    int linha_vertical = 6, coluna_vertical = 1;
    if (pode_posicionar(tabuleiro, linha_vertical, coluna_vertical, 1)) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_vertical + i][coluna_vertical] = 3;
        }
    }

    // Navio diagonal principal
    int linha_diagonal1 = 0, coluna_diagonal1 = 0;
    if (pode_posicionar(tabuleiro, linha_diagonal1, coluna_diagonal1, 2)) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_diagonal1 + i][coluna_diagonal1 + i] = 3;
        }
    }

    // Navio diagonal secundária
    int linha_diagonal2 = 0, coluna_diagonal2 = 9;
    if (pode_posicionar(tabuleiro, linha_diagonal2, coluna_diagonal2, 3)) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_diagonal2 + i][coluna_diagonal2 - i] = 3;
        }
    }

    // Exibe o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}