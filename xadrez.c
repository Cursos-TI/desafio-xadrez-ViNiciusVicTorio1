#include <stdio.h>

// Constantes para definir os movimentos
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Diagonal Superior Direita\n");
    }

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    for (int i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    for (int i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }

    // Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n");

    // Loop externo usando for para a movimentação para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Loop interno usando for para a movimentação para a esquerda
    for (int j = 0; j < 1; j++) {
        printf("Esquerda\n");
    }

    return 0;
}