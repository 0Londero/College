#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero_fatorial;
int conta;
int resultado;

printf ("Digite um numero para calcular seu fatorial");
scanf ("%d",&numero_fatorial);

while (numero_fatorial != 0)
{
    numero_fatorial = conta;
    numero_fatorial --;
    conta = conta * numero_fatorial;
    resultado = conta;
    resultado = resultado * numero_fatorial;
}
printf ("%d", &resultado);
}