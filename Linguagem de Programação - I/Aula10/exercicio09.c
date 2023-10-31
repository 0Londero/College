#include <stdio.h>

int ehBissexto(int ano) {
    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))) {
        return 1; // É bissexto
    } else {
        return 0; // Não é bissexto
    }
}

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ehBissexto(ano)) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}
