#include <stdio.h>
#include <stdlib.h>

int main()
{
int codigo_do_lanche;
int quantidade_do_produto;
float preco;

printf ("Digite o codigo do lanche:   .");
scanf ("%d", &codigo_do_lanche);

if (codigo_do_lanche == 100)
{
    printf ("Muito bem!, quantos Cachorros quentes voce gostaria de levar?   \n");
    scanf ("%d",& quantidade_do_produto);
    preco = quantidade_do_produto * 1.20;
    printf ("%d Cachorro(s) quente(s) custarao %.2f reais", quantidade_do_produto, preco);
}
else if (codigo_do_lanche == 101)
{
    printf ("Muito bem!, quantos Bauru simples voce gostaria de levar?   \n");
    scanf ("%d",& quantidade_do_produto);
    preco = quantidade_do_produto * 1.30;
    printf ("%d Bauru(s) simple(s) custarao %.2f reais", quantidade_do_produto, preco);
}
else if (codigo_do_lanche == 102)
{
    printf ("Muito bem!, quantos Bauru com ovo voce gostaria de levar?   \n");
    scanf ("%d",& quantidade_do_produto);
    preco = quantidade_do_produto * 1.50;
    printf ("%d Bauru(s) com ovo(s) custarao %.2f reais", quantidade_do_produto, preco);
}
else if (codigo_do_lanche == 103)
{
    printf ("Muito bem!, quantos Hamburguer voce gostaria de levar?   \n");
    scanf ("%d",& quantidade_do_produto);
    preco = quantidade_do_produto * 1.20;
    printf ("%d Hamburguer(es) custarao %.2f reais", quantidade_do_produto, preco);
}
else if (codigo_do_lanche == 104)
{
    printf ("Muito bem!, quantos Cheeseburguer voce gostaria de levar?   \n");
    scanf ("%d",& quantidade_do_produto);
    preco = quantidade_do_produto * 1.30;
    printf ("%d Cheeseburguer(es) custarao %.2f reais", quantidade_do_produto, preco);
}
else if (codigo_do_lanche == 105)
{
    printf ("Muito bem!, quantos Refrigerante voce gostaria de levar?   \n");
    scanf ("%d",& quantidade_do_produto);
    preco = quantidade_do_produto * 1.00;
    printf ("%d Refrigerante(s) custarao %.2f reais", quantidade_do_produto, preco);
}
else
{
    printf ("Codigo invalido ou produto ausente, encerrando o programa\n");
}
return 0;
}   