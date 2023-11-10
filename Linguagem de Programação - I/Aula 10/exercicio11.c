#include <stdio.h>

void encontrarElementosComuns(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("Elementos de A que existem em B:\n");

    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break; // Para evitar duplicatas
            }
        }
    }

    printf("\n");
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {3, 4, 5, 6, 7};
    int tamanhoA = sizeof(A) / sizeof(A[0]);
    int tamanhoB = sizeof(B) / sizeof(B[0]);

    encontrarElementosComuns(A, tamanhoA, B, tamanhoB);

    return 0;
}
