#include <stdio.h>
#include <stdlib.h>

int main ()
{ 
int idade;

printf ("Digite a idade do nadador: \n");
scanf ("%d", &idade);

if (idade >= 5 && idade <= 7)
{
    printf ("O nadador e classificado em Infantil A!");
}
else if (idade >= 8 && idade <= 10) 
{
    printf ("O nadador e classificado em Infantil B!");
}
else if (idade >= 11 && idade <= 13)
{
    printf ("O nadador e classificado em Juvenil A!");
}
else if (idade >= 14 && idade <= 17)
{
    printf ("O nadador e classificado em Juvenil B!");
}
else
{
    printf ("O nadador e classificado em Adulto!");
}
return 0;
}