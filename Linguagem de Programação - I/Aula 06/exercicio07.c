#include <stdio.h>

int main() {
    float p1, p2, p3, media;
    
    printf("Digite a nota da prova P1: ");
    scanf("%f", &p1);
    
    printf("Digite a nota da prova P2: ");
    scanf("%f", &p2);
    
    if ((p1 + p2) / 2.0 >= 5.0 && p1 >= 3.0 && p2 >= 3.0) {
        printf("Aluno aprovado direto!\n");
    } else {
        printf("Digite a nota da prova P3: ");
        scanf("%f", &p3);
        
        if (p1 > p2) {
            media = (p1 + p3) / 2.0;
        } else {
            media = (p2 + p3) / 2.0;
        }
        
        if (media >= 5.0) {
            printf("Aluno aprovado!\n");
        } else {
            printf("Aluno reprovado!\n");
        }
    }
    
    return 0;
}
