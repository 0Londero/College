#include <stdio.h>

// Definição da struct
struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

// Função para ler os dados da pessoa
void lerDados(struct Pessoa *p) {
    printf("Digite o nome: ");
    scanf("%s", p->nome);

    printf("Digite a idade: ");
    scanf("%d", &(p->idade));

    printf("Digite o endereço: ");
    scanf("%s", p->endereco);
}

// Função para imprimir os dados da pessoa
void imprimirDados(const struct Pessoa *p) {
    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
    printf("Endereço: %s\n", p->endereco);
}

int main() {
    // Declaração e inicialização da struct
    struct Pessoa pessoa1;

    // Chama a função para ler os dados
    lerDados(&pessoa1);

    // Chama a função para imprimir os dados
    imprimirDados(&pessoa1);

    return 0;
}
