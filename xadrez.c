#include <stdio.h>

// Constantes para definir os movimentos
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Função recursiva para movimentação do Bispo
void moverBispo(int movimentos) {
    if (movimentos > 0) {
        printf("Diagonal Superior Direita\n");
        moverBispo(movimentos - 1);
    }
}

// Função recursiva para movimentação da Torre
void moverTorre(int movimentos) {
    if (movimentos > 0) {
        printf("Direita\n");
        moverTorre(movimentos - 1);
    }
}

// Função recursiva para movimentação da Rainha
void moverRainha(int movimentos) {
    if (movimentos > 0) {
        printf("Esquerda\n");
        moverRainha(movimentos - 1);
    }
}

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    moverBispo(BISPO_MOV);

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    moverTorre(TORRE_MOV);

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    moverRainha(RAINHA_MOV);

    // Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n");

    // Loop aninhado com variáveis múltiplas e condições múltiplas
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (i == 1 && j == 1) {
                printf("Direita\n");
                break;
            }
            if (i == 0) {
                printf("Cima\n");
                continue;
            }
            printf("Direita\n");
        }
    }

    return 0;
}