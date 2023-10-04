#include <stdio.h>
#include <stdlib.h>

int main(){

int matriz_a [5] [5];
int vetor [5];
int soma = 0;
for (int linha = 0; linha < 5; linha++)
{
    for (int coluna = 0; coluna < 5; coluna++)
    {
        scanf("%d", &matriz_a[linha][coluna]);
        while (matriz_a[linha][coluna] == matriz_a[linha][coluna]);
        {
            int numero = matriz_a[linha][coluna];
            soma = soma + numero;

        if (matriz_a [linha][coluna] % 2 == 0)
        {
            vetor [0] = vetor [numero];
            vetor [0 + 1];
            continue; 
        }
        }
    
    printf ("soma = %d\n", soma);
    printf ("vetor = %d\n", vetor [0 + 1]);
    }
}
}