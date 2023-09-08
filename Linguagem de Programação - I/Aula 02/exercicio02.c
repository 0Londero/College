#include <stdlib.h>
#include <stdio.h>

int main(){

int dias_vividos;
int ano;
int mes;
int dia;

printf ("Digite a quantos dias sua alma esta vagando nesse mundo:");
scanf ("%d", &dias_vividos);

ano = dias_vividos / 365;
mes = dias_vividos / 30;
dia = dias_vividos;

printf ("Sua alma esta vagando por %d anos, equivalente a %d meses ou %d dias! Que venham mais XD.", ano, mes, dia);
}