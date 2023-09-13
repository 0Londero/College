#include <stdio.h>

// Função para calcular a soma dos elementos de uma linha da matriz B
int somaLinha(int linha, int matriz[5][5]) {
    int soma = 0;
    for (int coluna = 0; coluna < 5; coluna++) {
        soma += matriz[linha][coluna];
    }
    return soma;
}

int main() {
    int B[5][5];

    // Passo 1: Ler a matriz B[5][5]
    printf("Digite os elementos da matriz B[5][5]:\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            scanf("%d", &B[linha][coluna]);
        }
    }

    int maiorSoma = somaLinha(0, B); // Suponha que a primeira linha possui a maior soma
    int linhaMaiorSoma = 0;

    // Passo 2: Encontrar a linha com a maior soma
    for (int linha = 1; linha < 5; linha++) {
        int somaAtual = somaLinha(linha, B);
        if (somaAtual > maiorSoma) {
            maiorSoma = somaAtual;
            linhaMaiorSoma = linha;
        }
    }

    // Passo 3: Mostrar a linha com a maior soma
    printf("A linha com a maior soma de elementos é a linha %d.\n", linhaMaiorSoma);

    return 0;
}
