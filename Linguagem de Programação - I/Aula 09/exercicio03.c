#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int *array = (int *)malloc(tamanho * sizeof(int));

    if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }


    printf("Digite os valores para o array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    int positivos = 0;
    int negativos = 0;

    for (int i = 0; i < tamanho; i++) {
        if (array[i] > 0) {
            positivos++;
        } else if (array[i] < 0) {
            negativos++;
        }
    }

    printf("Elementos positivos: %d\n", positivos);
    printf("Elementos negativos: %d\n", negativos);

    free(array);
    return 0;
}
