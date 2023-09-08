#include <stdio.h>
#include <stdlib.h>

int main(){

int data_de_nascimento;
int ano, ano_atual;
int mes, mes_atual;
int dia, dia_atual;

//SOLICITA TODOS OS DADOS 
printf ("Digite a sua data de nascimento (dia, mes e ano) conseguinte \n");
scanf ("%d",&dia);
scanf ("%d",&mes);
scanf ("%d",&ano);
printf ("Muito bem!, agora digite a data atual (dia, mes e ano) conseguinte \n");
scanf ("%d",&dia_atual);
scanf ("%d",&mes_atual);
scanf ("%d",&ano_atual);

//CÁLCULO
ano_atual = ano_atual - ano;
mes_atual = mes_atual - mes;
dia_atual = dia_atual - dia;
ano_atual = ano_atual * 365;
mes_atual = mes_atual * 30;
data_de_nascimento = ano_atual + mes_atual + dia_atual;

printf ("Voce esta vivo por %d dias \n ",data_de_nascimento);

}