#include <stdio.h>

int main() {
    int primeiro_vetor[10];
    int segundo_vetor[10];
    int terceiro_vetor[20]; // Vetor resultante com o dobro do tamanho
    int loop = 0;

    printf("Digite os valores do primeiro vetor:\n");
    while (loop < 10) {
        printf("Valor %d: ", loop + 1);
        scanf("%d", &primeiro_vetor[loop]);
        loop++;
    }

    loop = 0; // Reiniciando o loop para usar novamente

    printf("Digite os valores do segundo vetor:\n");
    while (loop < 10) {
        printf("Valor %d: ", loop + 1);
        scanf("%d", &segundo_vetor[loop]);
        loop++;
    }

    // Combinação dos vetores
    for (int i = 0; i < 10; i++) {
        terceiro_vetor[i] = primeiro_vetor[i];
        terceiro_vetor[i + 10] = segundo_vetor[i];
    }

    // Impressão do vetor resultante
    printf("Terceiro vetor combinado:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", terceiro_vetor[i]);
    }

    return 0;
}
