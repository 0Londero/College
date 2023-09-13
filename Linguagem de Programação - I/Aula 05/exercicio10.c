#include <stdio.h>

int main() {
    int M[5][5];
    int SL[5] = {0}; // Inicializa o vetor de somas das linhas com zeros
    int SC[5] = {0}; // Inicializa o vetor de somas das colunas com zeros

    // Passo 1: Ler a matriz M[5][5]
    printf("Digite os elementos da matriz M[5][5]:\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            scanf("%d", &M[linha][coluna]);
        }
    }

    // Passo 2: Calcular as somas das linhas e das colunas
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            SL[linha] += M[linha][coluna]; // Soma da linha
            SC[coluna] += M[linha][coluna]; // Soma da coluna
        }
    }

    // Passo 3: Mostrar a matriz M
    printf("Matriz M[5][5]:\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            printf("%d\t", M[linha][coluna]);
        }
        printf("\n");
    }

    // Passo 4: Mostrar os vetores SL e SC
    printf("Vetor SL (Soma das Linhas):\n");
    for (int linha = 0; linha < 5; linha++) {
        printf("%d ", SL[linha]);
    }
    printf("\n");

    printf("Vetor SC (Soma das Colunas):\n");
    for (int coluna = 0; coluna < 5; coluna++) {
        printf("%d ", SC[coluna]);
    }
    printf("\n");

    return 0;
}
