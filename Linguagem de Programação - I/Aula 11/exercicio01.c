#include <stdio.h>

void mostrarEndereco(int valor) {
    printf("Endereço da variável dentro da função: %p\n", &valor);
}

int main() {
    int minhaVariavel = 42;

    printf("Endereço da variável dentro do main: %p\n", &minhaVariavel);

    mostrarEndereco(minhaVariavel);

    return 0;
}
