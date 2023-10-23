#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    int *p = A;
    int *q = A + 9;

    for (int i = 0; i < 10; i++)
    {
        A[i] = rand();
        printf("%d ", A[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            printf("%d ", *(p + i));
        }
        else
        {
            printf("%d ", *(q - (9 - i)));
        }
    }
    return 0;
}