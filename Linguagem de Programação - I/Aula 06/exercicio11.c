#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;

    if (media >= 5.0) {
        printf("Média final: %.2f\n", media);
        printf("Aprovado\n");
    } else {
        printf("Digite a nota da terceira prova: ");
        scanf("%f", &nota3);

        if (nota1 > nota2) {
            media = (nota1 + nota3) / 2.0;
        } else {
            media = (nota2 + nota3) / 2.0;
        }

        if (media >= 5.0) {
            printf("Média final: %.2f\n", media);
            printf("Aprovado\n");
        } else {
            printf("Média final: %.2f\n", media);
            printf("Reprovado\n");
        }
    }

    return 0;
}
