#include <stdio.h>
#include <stdlib.h>

// Função para verificar se o tiro acertou ou não
int verificarTiro(int alvo, int tiro)
{
    if (tiro == alvo)
    {
        return 0; // Acertou
    }
    else if (tiro < alvo)
    {
        return -1; // Está mais à esquerda
    }
    else
    {
        return 1; // Está mais à direita
    }
}

int main()
{
    int arvore = 0, tiro = 5, chute;
    int *pArvore, *pTiro, *pChute;

    pArvore = &arvore;
    pTiro = &tiro;
    pChute = &chute;

    printf("Escolha onde o marciano vai se esconder: ");
    scanf("%d", &*pArvore);

    for (int i = 0; i < 50; i++)
    {
        printf("Escondendo...\n");
    }

    while (tiro > 0)
    {
        printf("Onde o marciano está se escondendo? (1-100): ");
        scanf("%d", &*pChute);

        int resultado = verificarTiro(*pArvore, *pChute);

        if (resultado == 0)
        {
            printf("Parabéns! Você acertou o marciano.\n");
            break;
        }
        else if (resultado == -1)
        {
            printf("O marciano está mais à direita.\n");
        }
        else
        {
            printf("O marciano está mais à esquerda.\n");
        }

        tiro--;
        printf("Tentativas restantes: %d\n", tiro);
    }

    if (tiro == 0)
    {
        printf("Você não conseguiu acertar o marciano. Ele será levado para Marte.\n");
    }

    return 0;
}