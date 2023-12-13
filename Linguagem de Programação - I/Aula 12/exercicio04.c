#include <stdio.h>

// Definição da struct
struct Retorno {
    int x;
    int y;
};

// Função que retorna uma estrutura com os valores recebidos como argumentos
struct Retorno criarRetorno(int x, int y) {
    struct Retorno resultado;
    resultado.x = x;
    resultado.y = y;
    return resultado;
}

int main() {
    int parametro1, parametro2;

    // Solicita ao usuário para inserir dois inteiros
    printf("Digite o valor do primeiro parâmetro: ");
    scanf("%d", &parametro1);

    printf("Digite o valor do segundo parâmetro: ");
    scanf("%d", &parametro2);

    // Chama a função e recebe a estrutura de retorno
    struct Retorno resultado = criarRetorno(parametro1, parametro2);

    // Mostra os campos x e y da estrutura retornada
    printf("\nCampos da Estrutura Retornada:\n");
    printf("x: %d\n", resultado.x);
    printf("y: %d\n", resultado.y);

    return 0;
}
