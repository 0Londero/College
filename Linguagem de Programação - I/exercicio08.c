// 4 Condidere um cadastro de produto em um supermercado. Cada produto possui as seguintes indformações: - Nome do produto: com até 50 caracteres; - Código do produto: um inteiro; - Preço do produto: um número real; - Quantidade em estoque; . Um programador deseja escrever um programa que: a) Defina uma estrutura denominada estoque, que tenha os campos apropriados para guardar as informações conforme descrito acima. b) Faça o usuário entrar com cada uma das informações do produto. c) Mostre os dados do produto utilizando uma função.

#include <stdio.h>

struct estoque {
    int codigo;
    char nome[50];
    float preco; 
    int quantidade;
}; 

void mostra(struct estoque *s) 
{
    printf("Código: %d\n", s->codigo);
    printf("Nome: %s\n", s->nome);
    printf("Preço: %.2f\n", s->preco);
    printf("Quantidade: %d\n", s->quantidade);
}

int main() {
    struct estoque e;  // Alocar a estrutura, não um ponteiro para a estrutura

    printf("Digite o código do produto: ");
    scanf("%d", &e.codigo);

    printf("Digite o nome do produto (até 50 caracteres): ");
    scanf("%s", e.nome);

    printf("Digite o preço do produto: ");
    scanf("%f", &e.preco);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &e.quantidade);

    mostra(&e);  // Passar o endereço da estrutura

    return 0;
}

// RESPOSTA E