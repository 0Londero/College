#include <stdio.h>
#include <stdlib.h>

int main(){

int numero_inteiro;

printf ("Digite um numero inteiro:");
scanf ("%d", & numero_inteiro);


if (numero_inteiro > 0 && numero_inteiro % 2 == 0){
printf ("O numero em questao e positivo e par.");}
else if (numero_inteiro < 0 && numero_inteiro %2 != 0){
printf ("O numero em questao e negativo e impar.");}
else if (numero_inteiro < 0 && numero_inteiro %2 == 0){
printf ("O numero em questao e negativo e par.");}
else
{
printf ("O numero em questao e positivo e impar.");
}
}