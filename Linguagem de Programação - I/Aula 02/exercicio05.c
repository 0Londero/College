#include <stdio.h>
#include <stdlib.h>

int main()
{
float valor_inicial;
float valor_reserva = 0;

printf ("Digite um valor para ser somado (ou digite ZERO para SAIR do programa).\n");
scanf ("%f",&valor_inicial);

while (valor_inicial != 0)
{
    printf ("Digite o proximo valor:\n ");
    valor_reserva = valor_reserva+valor_inicial;
    scanf ("%f",& valor_inicial);
}

printf ("A soma final do conjunto e: %f!",valor_reserva);

}