#include <stdio.h>
#include <stdlib.h>

int main()
{
int loop = 0;
float numero1;
float numero2;
float numero3;
float soma;

printf ("_\nDigite tres numeros para somar\n");
scanf ("%f%f%f", &numero1, &numero2, &numero3);
soma = numero1 + numero2 + numero3;
printf ("%f", soma);

return 0;
}