#include <stdio.h>

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0; // 0 e 1 não são primos
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // Não é primo
        }
    }

    return 1; // É primo
}

int main() {
    int valor;

    do {
        printf("Digite um valor (digite 0 para sair): ");
        scanf("%d", &valor);

        if (valor < 0) {
            printf("Digite um valor positivo ou zero.\n");
        } else if (valor > 0) {
            if (ehPrimo(valor)) {
                printf("%d é um número primo.\n", valor);
            } else {
                printf("%d não é um número primo.\n", valor);
            }
        }
    } while (valor != 0);

    return 0;
}
