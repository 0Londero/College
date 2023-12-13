//5 Um programador deseja desevolver um programa que: a) Aloque de forma dinâmica um array de inteiros de 10 posições b) preencha esse array com valores fornecidos pelo usuário c) Para cada um dos elementos mostre o seu valor e seu endereço de memória d) libere o espaço alocado em memória para o array.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int numero = 10, i;
    int *arranjo;

    arranjo = malloc (sizeof (int) * numero);

    for (i = 0; i < numero; i++)
    {
        scanf ("%d", &arranjo[i]);
        printf ("%X %d \n", arranjo[i], arranjo[i]); //        printf("Endereço: %p, Valor: %d\n", (void *)&arranjo[i], arranjo[i]);
    }

    free (arranjo);
}
// A ou E