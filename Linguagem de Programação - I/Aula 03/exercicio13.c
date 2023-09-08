#include <stdio.h>
#include <stdlib.h>

int main()
{
float salario_atual;
float ano01;
float ano02;
float ano03;


printf ("Digite o seu salario atual:");
scanf ("%f", &salario_atual);

ano01 = salario_atual + (salario_atual * (7.0/100));
ano02 = ano01 + (ano01 * (6.0/100));
ano03 = ano02  + (ano02 * (5.0/100));

printf ("No PRIMEIRO ano seu salario ficara: \n ______ %.2f ______", ano01);
printf ("\nNo SEGUNDO ano seu salario ficara: \n ______ %.2f ______", ano02);
printf ("\nNo TERCEIRO ano seu salario ficara: \n ______ %.2f ______", ano03);
return 0;
}
