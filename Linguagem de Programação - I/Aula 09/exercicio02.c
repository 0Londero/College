#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int primeiroVetor[10];


    for (int i = 0; i < 10; i++) {
        primeiroVetor[i] = rand() % 100 + 1;
    }


    int totalPares = 0;
    for (int i = 0; i < 10; i++) {
        if (primeiroVetor[i] % 2 == 0) {
            totalPares++;
        }
    }

    int *segundoVetor = (int *)malloc(totalPares * sizeof(int));


    int indiceSegundo = 0;
    for (int i = 0; i < 10; i++) {
        if (primeiroVetor[i] % 2 == 0) {
            segundoVetor[indiceSegundo] = primeiroVetor[i];
            indiceSegundo++;
        }
    }


    printf("Primeiro vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", primeiroVetor[i]);
    }

    printf("\nSegundo vetor: ");
    for (int i = 0; i < totalPares; i++) {
        printf("%d ", segundoVetor[i]);
    }
    
    free(segundoVetor);
    return 0;
}
