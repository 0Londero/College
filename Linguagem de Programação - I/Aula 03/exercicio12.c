#include <stdio.h>
#include <stdlib.h>

int main ()
{
float minutos;
float tarifa;


printf ("Digite a duracao da chamada em minutos: ");
scanf ("%f", &minutos);

if (minutos == 3)
{
    printf ("Voce deve pagar R$ 1.15 pela chamada telefonica.");
}
else if (minutos > 3)
{
    tarifa = 1.15 + (minutos * 0.26);
    printf ("Voce deve pagar R$ %.2f pela chamada telefonica.", tarifa);
}
else
{
    printf ("Não foram atribuidos valores a sua chamada telefonica");
}
return 0;
}