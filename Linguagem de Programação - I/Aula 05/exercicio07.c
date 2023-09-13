#include <stdio.h>

int main() 
{
    int M1[5][5], M2[5][5], V[25];
    int count = 0;


    printf("Passo 1: Digite os elementos da matriz M1[5][5]:\n");
    for (int linha = 0; linha < 5; linha++)
    
        for (int coluna = 0; coluna < 5; coluna++)
            scanf("%d", &M1[linha][coluna]);


    printf("Passo 2: Digite os elementos da matriz M2[5][5]:\n");
    for (int linha = 0; linha < 5; linha++)
        for (int coluna = 0; coluna < 5; coluna++)
            scanf("%d", &M2[linha][coluna]);


    printf("Passo 3: Encontrando valores em M1 que também existem em M2...\n");
    for (int linha = 0; linha < 5; linha++) 
    {
        for (int coluna = 0; coluna < 5; coluna++) 
        {
            int valor = M1[linha][coluna];
            int encontrado = 0;

      
            for (int x = 0; x < 5; x++) 
            {
                for (int y = 0; y < 5; y++) 
                {
                    if (M2[x][y] == valor) 
                    {
                        encontrado = 1; 
                        break;
                    }
                }
                if (encontrado) break;
            }

   
            if (encontrado) 
            {
                V[count] = valor;
                count++;
            }
        }
    }


    printf("Passo 4: Valores em M1 que também existem em M2:\n");
    for (int i = 0; i < count; i++)
        printf("%d ", V[i]);
    printf("\n");

    return 0;
}
