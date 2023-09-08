#include <stdio.h>
#include <stdlib.h>

int main()
{

int segundos_do_evento;
int horas;
int minutos;
int segundos;

printf ("Digite a duracao do evento em segundos.");
scanf ("%d", &segundos_do_evento);

horas = segundos_do_evento/3600;
minutos = segundos_do_evento/60;
segundos = segundos_do_evento;

printf ("O evento durou o equivalente a %d horas, %d minutos ou %d segundos.",horas , minutos, segundos );

}