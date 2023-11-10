#include <stdio.h>
#include <stdlib.h>

int *alocarArrayInteiros(int tamanho) {
    int *ptr = (int *)malloc(tamanho * sizeof(int));
    if (ptr == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return ptr;
}

int main() {
    int tamanho;

    printf("Digite o tamanho do array de inteiros: ");
    scanf("%d", &tamanho);

    int *array = alocarArrayInteiros(tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para o elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Valores armazenados no array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
