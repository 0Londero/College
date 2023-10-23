#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string1[51], string2[51];

    printf("Digite a primeira string (máximo 50 caracteres): ");
    scanf(" %50[^\n]", string1);

    printf("Digite a segunda string (máximo 50 caracteres): ");
    scanf(" %50[^\n]", string2);

    int tamanhoTerceiraString = strlen(string1) + strlen(string2) + 1; 

    char *terceiraString = (char *)malloc(tamanhoTerceiraString * sizeof(char));

    if (terceiraString == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    strcpy(terceiraString, string1);
    strcat(terceiraString, " "); 
    strcat(terceiraString, string2);

    printf("Terceira string: %s\n", terceiraString);

    free(terceiraString);

    return 0;
}
