#include <stdio.h>
#include <stdlib.h>

int *alocarInteiro() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return ptr;
}

int main() {
    int *inteiro1 = alocarInteiro();
    int *inteiro2 = alocarInteiro();

    printf("Digite o valor do primeiro inteiro: ");
    scanf("%d", inteiro1);

    printf("Digite o valor do segundo inteiro: ");
    scanf("%d", inteiro2);

    int soma = *inteiro1 + *inteiro2;

    printf("A soma dos dois inteiros é: %d\n", soma);

    free(inteiro1);
    free(inteiro2);

    return 0;
}
