#include <stdio.h>

int main()
{

char frase[100];

printf ("Digite uma frase:   ");
fgets (frase, sizeof (frase), stdin);

printf ("Sua frase letra por letra: \n");
for (int loop = 0; frase[loop] != '\0'; loop++) 
{
if (frase [loop] != '\n' && frase [loop] != '\r')
{
    printf ("%c\n", frase[loop]);
}
}
return 0;
}