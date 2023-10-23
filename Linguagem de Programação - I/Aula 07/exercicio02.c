#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Declaração de vars: Correto!*/
    float var1, var2;
    float *pon1, *pon2;

    /*Preenchimento de vars: Correto!*/
    printf("Valor var1: ");
    scanf("%f", &var1);

    printf("Valor var2: ");
    scanf("%f", &var2);

    /*Preenchimento de ponteiros: Correto!*/
    pon1 = &var1;
    pon2 = &var2;

    printf("\nEndereco de memoria var1: %p\n", pon1);
    printf("Endereco de memoria var2: %p\n", pon2);

    /*Correto!*/
    printf("Conteudo var1: %.2f\n", *pon1);
    printf("Conteudo var2: %.2f\n", *pon2);

    /*Correto!*/
    printf("Endereco de memoria pon1: %p\n", &pon1);
    printf("Endereco de memoria pon2: %p\n", &pon2);

    /*Correto!*/
    printf("Conteudo pon1: %p\n", pon1);
    printf("Conteudo pon2: %p\n", pon2);

    /*Correto!*/
    printf("Conteudo apontado pon1: %.2f\n", *pon1);
    printf("Conteudo apontado pon2: %.2f\n", *pon2);

    return 0;
}