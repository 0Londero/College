#include <stdio.h>

void inverterValores(int *valor1, int *valor2) {
    int temp = *valor1;
    *valor1 = *valor2;
    *valor2 = temp;
}

int main() {
    int valorA = 10;
    int valorB = 20;

    printf("Valores antes da chamada da função: valorA = %d, valorB = %d\n", valorA, valorB);

    inverterValores(&valorA, &valorB); // Passando os endereços das variáveis

    printf("Valores após a chamada da função: valorA = %d, valorB = %d\n", valorA, valorB);

    return 0;
}
