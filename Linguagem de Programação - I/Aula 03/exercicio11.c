#include <stdio.h>
#include <stdlib.h>

int main ()
{
int dias_de_trabalho;
float imposto;
float valor_liquido;
float valor_bruto;

printf ("Por quantos dias o encandor trabalhou? \n");
scanf ("%d",& dias_de_trabalho);

imposto = 1.6 * dias_de_trabalho;
valor_bruto = dias_de_trabalho * 20;
valor_liquido = valor_bruto - imposto;

printf ("A quantidade liquida que devera ser paga ao encanador e: R$ %.2f", valor_liquido);

}