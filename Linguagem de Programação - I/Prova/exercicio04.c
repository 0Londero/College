// 1
#include <stdio.h>
#include <stdlib.h>

void f (int x)
{
    x += 100;
}

void g (int *x)
{
    *x = 200;
}

void h (void)
{
    int m = 50;

    f(m);
    g(&m);
}

// Qual será o valor da variavel m após a execução das linahs 19 e da linha 20 respectivamente ?
// A) 100 e 200 B) 50 e 300 C) 150 e 200 RESPOSTA D) 150 e endereço 200 E) 50 e endereço 200