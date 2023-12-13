//  3 Para supresa do programador, o valor mostrado pela chamada a prinf, no código abaixo, foi zero, mas ao ser executada a chamada função ler_matricula, o usuário digitou 1000. Para funcionar corretamente, da forma esperada, o programa deveria ser reescrito como ?

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int matricula;
    char nome [31];
    float notas [4], ms, mf;
} Aluno;

void ler_matricula (Aluno a) // void ler_matricula(Aluno *a)
{
    scanf ("%d", &a.matricula); // scanf("%d", &(a->matricula));
}

int main()
{
    Aluno aluno;
    aluno.matricula = 0;
    ler_matricula (aluno); //  ler_matricula(&aluno); 
    printf ("%d\n", aluno.matricula);
}

// RESPOSTA D
// O problema no seu código ocorre porque a função ler_matricula recebe a estrutura Aluno por valor, ou seja, uma cópia da estrutura é passada para a função. Portanto, qualquer alteração feita dentro da função não afeta a estrutura original na função main. Para corrigir isso, você deve passar a estrutura por referência.