#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1;
    int *pon1;

    printf("Valor var1: ");
    scanf("%d", &var1);

    pon1 = &var1;

    if (*pon1 % 2 == 0)
    {
        printf("O conteudo apontado pelo ponteiro eh par.\n");
    }
    else
    {
        printf("O conteudo apontado pelo ponteiro eh impar.\n");
    }

    if (*pon1 > 0)
    {
        printf("O conteudo apontado pelo ponteiro eh positivo.\n");
    }
    else
    {
        printf("O conteudo apontado pelo ponteiro eh negativo.\n");
    }

    return 0;
}