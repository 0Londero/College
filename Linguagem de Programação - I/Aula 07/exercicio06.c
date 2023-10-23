#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    int *pA, *pB, *pC, *pD;

    printf("Inserir valor A: ");
    scanf("%d", &a);

    pA = &a;

    printf("Inserir valor B: ");
    scanf("%d", &b);

    pB = &b;

    printf("Inserir valor C: ");
    scanf("%d", &c);

    pC = &c;

    printf("Inserir valor D: ");
    scanf("%d", &d);

    pD = &d;

    printf("Soma dos valores: %d", (*pA + *pB + *pC + *pD));

    return 0;
}