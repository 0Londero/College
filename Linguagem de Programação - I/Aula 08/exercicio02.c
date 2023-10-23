#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matrx[50][50];
    float *p;
    p = &matrx;

    for (int i = 0; i < 100; i++)
    {
        *p = 0.0;
        printf("%.2f\n", *p);
        p++;
    }

    return (0);
}