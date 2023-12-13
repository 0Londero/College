#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c,*x1,*x2;
    x1 = &c;
    x2 = x1;
    printf ("%p\n",x1);
    printf ("%p\n",x2);
    return 0;
}

// É correto afirmar que:
//A) A sua execucao apresentara dois valores iguais. - RESPOSTA B) Sua execucao apresentara uma mensagem de erro. C) O codigo possui erros lexicos e sintaticos. D) A sua execucao apresentara um valor aleatorio, pois a variavel c nao foi inicializada. E)A sua execucao nao apresentara mensagem ou resultado.