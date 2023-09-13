#include <stdio.h>
#include <stdlib.h>



int main ()
{
int matriz [10] [5];
int resultado = 0;
//solicita os elementos da matriz 
printf ("Digite os elementos da matriz [10][5]:\n");

for (int linha = 0; linha < 10; linha++)
{
    for (int coluna = 0; coluna < 5; coluna++)
    {
        printf ("Elemento [%d][%d]: \n",linha, coluna);
        scanf ("%d", & matriz[linha][coluna]);
    }
    
}

//soma os elementos da matriz 
for (int linha = 1; linha < 10; linha++)
{
    for (int coluna = 1; coluna < 5; coluna++)
    {
        int numero_atual = matriz [linha][coluna];
        int numero_anterior = matriz [linha - 1] [coluna -1];
        int soma = numero_atual + numero_anterior;
        resultado = soma + resultado;
    }
    
}
printf ("Resultado : %d \n", resultado);


}