#include <stdio.h>

int main() {
    int A[5][5];
    int somaDiagonal = 0;
    int diagonalPrincipal[5];

    // Passo 1: Ler a matriz A[5][5]
    printf("Digite os elementos da matriz A[5][5]:\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            scanf("%d", &A[linha][coluna]);
        }
    }

    // Passo 2: Calcular a soma dos elementos da diagonal principal e armazenar na diagonalPrincipal[]
    for (int i = 0; i < 5; i++) {
        somaDiagonal += A[i][i]; // Adiciona o elemento da diagonal principal à soma
        diagonalPrincipal[i] = A[i][i]; // Armazena o elemento da diagonal principal no vetor
    }

    // Passo 3: Mostrar a soma dos elementos da diagonal principal
    printf("A soma dos elementos da diagonal principal é: %d\n", somaDiagonal);

    // Passo 4: Mostrar os elementos da diagonal principal no vetor
    printf("Elementos da diagonal principal em um vetor S:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", diagonalPrincipal[i]);
    }
    printf("\n");

    return 0;
}
