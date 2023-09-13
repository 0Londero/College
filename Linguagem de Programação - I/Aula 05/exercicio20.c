#include <stdio.h>
#include <string.h>

int main() {
    char primeiraString[51]; // Declara a primeira string com tamanho máximo de 50 caracteres
    char segundaString[51];  // Declara a segunda string com tamanho máximo de 50 caracteres

    // Passo 1: Ler a primeira string
    printf("Digite a primeira string (limite de 50 caracteres): ");
    scanf("%50s", primeiraString);

    // Passo 2: Ler a segunda string
    printf("Digite a segunda string (limite de 50 caracteres): ");
    scanf("%50s", segundaString);

    // Passo 3: Verificar se a segunda string está inserida na primeira
    if (strstr(primeiraString, segundaString) != NULL) {
        printf("A segunda string está inserida na primeira.\n");
    } else {
        printf("A segunda string não está inserida na primeira.\n");
    }

    return 0;
}
