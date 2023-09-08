#include <stdio.h>
#include <stdlib.h>

int main ()
{
float notaI;
float notaII;
float notaIII;
float media;
int quantidade_de_alunos = 1;
char nome[50];

printf ("Digite quantos alunos terao a media calculada\n");
scanf ("%d", &quantidade_de_alunos);

while (quantidade_de_alunos > 0)
{
    fflush;
    printf ("Digite o nome do aluno(a): \n");
    scanf ("%49s", &nome);
    printf ("Digite as tres notas do aluno(a) em seguida separadas com enter.\n");
    scanf ("%f%f%f", &notaI, &notaII, &notaIII);
    media = (notaI + notaII + notaIII) / 3; 
    printf ("O NOME do aluno(a) e: %s \n sua MEDIA e: %.2f.\n", nome, media);
    quantidade_de_alunos = quantidade_de_alunos -1;
}
printf ("Nao possui mais alunos em sua lista, programa finalizado\n");
return 0;
}