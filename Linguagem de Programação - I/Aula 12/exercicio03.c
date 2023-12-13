#include <stdio.h>

// Definição da struct
struct Ponto {
    int x;
    int y;
};

// Função para receber dois inteiros e armazená-los em uma struct
struct Ponto criarPonto(int x, int y) {
    struct Ponto ponto;
    ponto.x = x;
    ponto.y = y;
    return ponto;
}

// Função para copiar uma struct para outra
struct Ponto copiarPonto(struct Ponto original) {
    struct Ponto copia;
    copia = original;
    return copia;
}

int main() {
    int x, y;

    // Solicita ao usuário para inserir dois inteiros
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    // Cria uma struct com os valores inseridos
    struct Ponto pontoOriginal = criarPonto(x, y);

    // Copia a struct para uma segunda struct
    struct Ponto pontoCopia = copiarPonto(pontoOriginal);

    // Mostra a segunda struct
    printf("\nSegunda Estrutura (Cópia):\n");
    printf("x: %d\n", pontoCopia.x);
    printf("y: %d\n", pontoCopia.y);

    return 0;
}
