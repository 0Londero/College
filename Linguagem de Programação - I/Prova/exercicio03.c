#include <stdio.h>

int main()
{
    int y, *p, x;

    y = 0;
    p = &y;
    x = *p;
    x += 10;
    ++(*p);
    --x;
    (*p) += x;
    printf ("y = %i\n", y);
    return 0;
}

// Ao ser compilado e executado em condições ideais, a saida do programa é:
// A) y = 9 B) y = 0 C) y = 10 - RESPOSTA D) y = 1 E) y = 11