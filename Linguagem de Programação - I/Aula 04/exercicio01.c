#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero;
int resultado;

printf ("Digite um numero inteiro:");
scanf ("%d",&numero);


switch (numero)
{
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
    resultado = numero * 2;
    printf ("O resultado e: %d", resultado);
        break;

default:
    printf ("Numero digitado invalido");
    break;
}
}