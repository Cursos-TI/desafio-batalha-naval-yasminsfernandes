#include <stdio.h>
#include <stdlib.h> // Adicionado para a função abs()

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define TAMANHO_HABILIDADE 5

// Função para construir a matriz de habilidade Cone
void construir_cone(int habilidade[][TAMANHO_HABILIDADE]) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            habilidade[i][j] = (j >= TAMANHO_HABILIDADE / 2 - i && j <= TAMANHO_HABILIDADE / 2 + i) ? 1 : 0;
        }
    }
}

// Função para construir a matriz de habilidade Cruz
void construir_cruz(int habilidade[][TAMANHO_HABILIDADE]) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            habilidade[i][j] = (i == TAMANHO_HABILIDADE / 2 || j == TAMANHO_HABILIDADE / 2) ? 1 : 0;
        }
    }
}

// Função para construir a matriz de habilidade Octaedro
void construir_octaedro(int habilidade[][TAMANHO_HABILIDADE]) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
        habilidade[i][j] = (abs(i - TAMANHO_HABILIDADE / 2) + abs(j - TAMANHO_HABILIDADE / 2) <= TAMANHO_HABILIDADE / 2) ? 1 : 0;
        }
    }
}

// Função para sobrepor a habilidade no tabuleiro
void sobrepor_habilidade(int tabuleiro[][TAMANHO_TABULEIRO], int habilidade[][TAMANHO_HABILIDADE], int linha_origem, int coluna_origem) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            int linha_tabuleiro = linha_origem - TAMANHO_HABILIDADE / 2 + i;
            int coluna_tabuleiro = coluna_origem - TAMANHO_HABILIDADE / 2 + j;
            if (linha_tabuleiro >= 0 && linha_tabuleiro < TAMANHO_TABULEIRO && coluna_tabuleiro >= 0 && coluna_tabuleiro < TAMANHO_TABULEIRO && habilidade[i][j] == 1) {
                tabuleiro[linha_tabuleiro][coluna_tabuleiro] = 5;
            }
        }
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    int habilidade_cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};
    int habilidade_cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};
    int habilidade_octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};

    // Posiciona os navios (como no nível anterior)
    tabuleiro[2][3] = tabuleiro[2][4] = tabuleiro[2][5] = 3;
    tabuleiro[6][1] = tabuleiro[7][1] = tabuleiro[8][1] = 3;
    tabuleiro[0][0] = tabuleiro[1][1] = tabuleiro[2][2] = 3;
    tabuleiro[0][9] = tabuleiro[1][8] = tabuleiro[2][7] = 3;

    // Constrói as matrizes de habilidade
    construir_cone(habilidade_cone);
    construir_cruz(habilidade_cruz);
    construir_octaedro(habilidade_octaedro);

    // Sobrepõe as habilidades no tabuleiro
    sobrepor_habilidade(tabuleiro, habilidade_cone, 1, 4);
    sobrepor_habilidade(tabuleiro, habilidade_cruz, 7, 7);
    sobrepor_habilidade(tabuleiro, habilidade_octaedro, 4, 2);

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