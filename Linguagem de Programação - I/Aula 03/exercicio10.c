#include <stdio.h>
#include <stdlib.h>

int main()
{
float celsius;
float c;
float fahrenheit;
float f;
char escolha;

printf ("Escreva c para celsius ou f para fahrenheit \n");
fflush (stdin);
scanf ("%c", & escolha);

if ((escolha == 'c')||(escolha == 'C'))
{
    printf ("Digite a temperatura em Celsius : __ ");
    scanf ("%f", & celsius);
    f = (9/5) * celsius + 32;
    printf ("A temperatura em Fahrenheit e     %.2f    !", f);

}
else if ((escolha == 'f')||(escolha == 'F'))
{
    printf ("Digite a temperatura em Fahrenheit : __");
    scanf ("%f", & fahrenheit);
    c = (5/9) * fahrenheit - 32;
    printf ("A temperatura em Celsius e    %.2f   !", c);
}
else
{
    printf ("Letra de entrada nao identificada, tente novamente!.");
}
return 0;
}