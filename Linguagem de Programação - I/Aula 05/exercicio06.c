#include <stdio.h>

int main() 
{
int M1[5][5], M2[5][5], V[25];
int count = 0;

// Ler a matriz
printf("Passo 1: Digite os elementos da matriz M1[5][5]:\n");
for (int linha = 0; linha < 5; linha++) 
{
    for (int coluna = 0; coluna < 5; coluna++) 
    {
        scanf("%d", &M1[linha][coluna]);
    }
}
    
printf("Passo 2: Digite os elementos da matriz M2[5][5]:\n");
for (int linha = 0; linha < 5; linha++) 
{
    for (int coluna = 0; coluna < 5; coluna++) 
    {
         scanf("%d", &M2[linha][coluna]);
    }
}

//Verificar valores em M1 que não estão em M2 e armazená-los em V
printf("Passo 3: Verificando valores em M1 que não estão em M2...\n");
for (int linha = 0; linha < 5; linha++) 
{
    for (int coluna = 0; coluna < 5; coluna++) 
    {
        int valor = M1[linha][coluna];
        int encontrado = 0;

            //Verificar se o valor existe em M2
            for (int x = 0; x < 5; x++) 
            {
                for (int y = 0; y < 5; y++) 
                {
                    if (M2[x][y] == valor) 
                    {
                        encontrado = 1; // O valor foi encontrado em M2
                        break;
                    }
                }
                if (encontrado) break;
            }

            //não foi encontrado em M2
            if (!encontrado) 
            {
                V[count] = valor;
                count++;
            }
        }
    }
//Mostrar o vetor V resultante
    printf("Passo 4: Valores em M1 que não estão em M2:\n");
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", V[i]);
    }
    printf("\n");

    return 0;
}
