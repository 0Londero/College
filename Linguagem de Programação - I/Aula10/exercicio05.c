#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar um número aleatório entre 0 e 50
int gerarNumeroAleatorio() {
    return rand() % 51; // Gera um número entre 0 e 50
}

// Função para verificar o palpite do jogador e dar feedback
int verificarPalpite(int numero, int palpite) {
    if (palpite < numero) {
        printf("Muito baixo. Tente novamente\n");
        return 0;
    } else if (palpite > numero) {
        printf("Muito alto. Tente novamente\n");
        return 0;
    } else {
        printf("Excelente! Você adivinhou o número\n");
        return 1;
    }
}

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com uma semente

    int numeroAdivinhado = gerarNumeroAleatorio();
    int palpite;
    int acertou = 0;

    printf("Tenho um número de 0 a 50\n");
    printf("Você pode adivinhar meu número?\n");

    while (!acertou) {
        printf("Por favor, digite seu palpite: ");
        scanf("%d", &palpite);
        acertou = verificarPalpite(numeroAdivinhado, palpite);
    }

    return 0;
}
