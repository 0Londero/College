#include <stdio.h>

void incrementarValor(int *valor) {
    (*valor)++; // Incrementa o valor usando o ponteiro
}

int main() {
    int meuValor = 10;

    printf("Valor antes da chamada da função: %d\n", meuValor);

    incrementarValor(&meuValor); // Passando o endereço da variável

    printf("Valor incrementado após a chamada da função: %d\n", meuValor);

    return 0;
}
