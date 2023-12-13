// 2 Qual será o velor da variável total no final do seguinte trecho de código programa ?
#include <stdio.h>
#include <stdlib.h>


int main () 
{

 int valor, temp, aux, *p1, *p2, *p3;
 int vetor [] = {1,2,3,4,5,6,7,8,9};
 int total;

 valor = 3;
 p1 = &valor;
 *p1 = 2 - *p1;
 total = *p1;

 temp = 2;
 p2 = &temp;
 *p2 = 3;
 total += (*p2 - temp);

 p3 = vetor + 1;
 aux = *p3;
 total = total - *p3;
p3 ++;
total += (*p3 + aux);
aux = *(p3 - 1);
aux = *p3++;
temp = (*p3)++;

total += *p3 - aux;

printf ("total = %d\n", total);

}


// Resposta: a) 3 b) 4 RESPOSTA c) 5 d) 6 e)7