#include <stdio.h>
#include <stdlib.h>


int somar (float numero1, float numero2)
{
 return numero1 + numero2;
}


int main()
{
float primeiro;
float segundo;

printf ("Escreva o primeiro numero\n");
scanf ("%f", & primeiro);
printf ("Escreva o segundo numero\n");
scanf ("%f", & segundo);

float resultado = somar (primeiro, segundo);

printf ("A soma e: %.2f \n", resultado);

return 0;
}
