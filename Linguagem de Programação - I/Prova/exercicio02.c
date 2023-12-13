#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float vet [] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f, *g;

    f = vet;
    g = f + 4;

    while (f < g)
    {
        g--;
        f++;
    }
    
    printf ("%.1f", *g);
    return 0;

}

// Qual será a saída do programa ?

// a = 2.2
// b = 3.2
// c = 3.3 resposta
// d = 4.3
// e = 4.4 