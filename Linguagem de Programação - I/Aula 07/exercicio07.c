#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, raio, volume;
    float *pAltura, *pRaio;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    pAltura = &altura;
    pRaio = &raio;

    volume = 3.14 * (*pRaio * *pRaio) * *pAltura;

    printf("\nO volume do cilindro é: %.2f\n", volume);

    return 0;
}