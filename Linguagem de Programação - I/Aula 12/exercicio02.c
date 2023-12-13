#include <stdio.h>

// Definição da struct para representar um produto
struct Produto {
    char nome[50];
    float valor;
};

int main() {
    // Declaração de um array de structs Produto para armazenar 10 produtos
    struct Produto produtos[10];

    // Preenchimento dos dados dos produtos
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);

        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valor);
    }

    // Exibição dos dados dos produtos
    printf("\nLista de Produtos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Valor: R$ %.2f\n", produtos[i].valor);
        printf("\n");
    }

    return 0;
}
