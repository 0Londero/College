#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho;

    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &tamanho);


    int *array1 = (int *)malloc(tamanho * sizeof(int));
    int *array2 = (int *)malloc(tamanho * sizeof(int));

    if (array1 == NULL || array2 == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        array1[i] = rand() % 100;
        array2[i] = rand() % 100;
    }

    printf("Soma dos elementos dos arrays:\n");
    for (int i = 0; i < tamanho; i++) {
        int resultado = array1[i] + array2[i];
        printf("Posição %d: %d + %d = %d\n", i, array1[i], array2[i], resultado);
    }

    free(array1);
    free(array2);

    return 0;
}
