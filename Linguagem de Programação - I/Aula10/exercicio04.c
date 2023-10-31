#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogada() {
    return rand() % 2; // Retorna 0 para CARA e 1 para COROA
}

int main() {
    int cara = 0;
    int coroa = 0;

    // Inicializa o gerador de números aleatórios com uma semente
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        int resultado = jogada();
        if (resultado == 0) {
            printf("CARA\n");
            cara++;
        } else {
            printf("COROA\n");
            coroa++;
        }
    }

    printf("CARA apareceu %d vezes\n", cara);
    printf("COROA apareceu %d vezes\n", coroa);

    return 0;
}
