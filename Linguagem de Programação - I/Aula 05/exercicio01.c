#include <stdio.h>
#include <stdlib.h>

int main(){

//declaração das variáveis
int vetor[10];
int loop_do_vetor;
int numero;
int positivos = 0;
int negativos = 0;
//processamento
for (loop_do_vetor = 0; loop_do_vetor < 10; loop_do_vetor ++)
{
printf ("Digite o %d numero:", loop_do_vetor + 1);
scanf ("%d",& vetor[loop_do_vetor]);

    if (vetor[loop_do_vetor] < 0)
    {
        negativos++;
    }
    else
    {
        positivos++;
    }

}

//resultado
printf ("Foram encontrados %d numeros positivos e %d negativos!\n" ,positivos, negativos);

return 0;
}