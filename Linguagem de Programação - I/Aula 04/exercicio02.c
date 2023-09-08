#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero;
int resultado;

printf ("Digite quinze numeros para calcular seu quadrado\n");

for (int loop = 0; loop <= 15; loop ++)
{
    scanf ("%d",&numero);
    resultado = numero * numero;
    printf ("Resultado:___ %d\n",resultado);
}








}