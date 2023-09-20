#include <stdio.h>

int main() {
    float valor_imposto, multa, novo_valor_imposto;
    int meses_atraso;

    printf("Digite o valor do imposto: R$ ");
    scanf("%f", &valor_imposto);

    printf("Digite o número de meses de atraso: ");
    scanf("%d", &meses_atraso);

    if (valor_imposto <= 99.99) {
        multa = meses_atraso * 2.0;
    } else if (valor_imposto <= 500.00) {
        multa = meses_atraso * 4.0;
    } else {
        multa = meses_atraso * 8.0;
    }

    novo_valor_imposto = valor_imposto + multa;

    printf("Multa a ser paga: R$ %.2f\n", multa);
    printf("Novo valor do imposto: R$ %.2f\n", novo_valor_imposto);

    return 0;
}
