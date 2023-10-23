#include <stdio.h>
#include <stdlib.h>

int main()
{

// Declaração das variárel 
float tempo = 0;
float distancia = 0;
float valor = 0;
// Declartação dos ponteiros
float *ponteirotempo = &tempo;
float *ponteirodistancia = &distancia;
float *ponteirovalor = &valor;
// Demanda e salva as informações da aplicação 
printf ("Digite o tempo da viagem em segundos: \n");
scanf("%f", & tempo);
printf ("Digite a distancia da viagem em km: \n");
scanf ("%f", & distancia);

if (distancia < 1)
{
    printf ("Distancia menor que um kilometro nao sera calculada");
    distancia = 0;
}



// Calcula manipulando os ponteiros 
*ponteirotempo = (*ponteirotempo)*(0.02);
*ponteirodistancia = (*ponteirodistancia)*(1.00);
*ponteirovalor = *ponteirotempo + *ponteirodistancia;

// Imprime
printf ("O valor que sera pago na viagem e de: %.2f\n", *ponteirovalor);

return 0;
}