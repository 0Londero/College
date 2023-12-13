#include <stdio.h>
#include <stdlib.h>


int main()
{
//Ler valor
int valor;
printf ("Digite um valor inteiro :   ");
scanf ("%d", &valor);

int *localnamemoria = &valor;
int *resultado = valor;
printf ("Local na memória : %d\n", localnamemoria);
printf ("Valor : %d\n", valor);
}