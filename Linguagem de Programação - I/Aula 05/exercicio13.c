#include <stdio.h>

int main() {
    int n; // Número de camadas da pirâmide
    printf("Digite o número de camadas da pirâmide: ");
    scanf("%d", &n);

    if (n <= 0 || n % 2 == 0) {
        printf("O número de camadas deve ser ímpar e maior que zero.\n");
        return 1; // Encerra o programa com erro
    }

    int matriz[n][n]; // Declara a matriz com tamanho n x n

    // Preenche a matriz com os números da pirâmide
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - i; j++) {
            matriz[i][j] = i + 1;
            matriz[n - i - 1][j] = i + 1;
            matriz[j][i] = i + 1;
            matriz[j][n - i - 1] = i + 1;
        }
    }

    // Imprime a matriz piramidal
    printf("Matriz Piramidal %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
