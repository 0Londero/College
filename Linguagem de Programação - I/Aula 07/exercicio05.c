#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, aux;
    int *ponX, *ponY;

    printf("Inserir valor x: ");
    scanf("%d", &x);

    ponX = &x;

    printf("Inserir valor y: ");
    scanf("%d", &y);

    ponY = &y;

    printf("Valor de x: %d\n", *ponX);
    printf("Valor de y: %d\n", *ponY);

    printf("Invertendo...\n");

    aux = *ponX;
    *ponX = *ponY;
    *ponY = aux;

    printf("Valor de x: %d\n", *ponX);
    printf("Valor de y: %d\n", *ponY);

    return 0;
}