#include <stdio.h>

int main() {
    int numeroIdentificacao;
    float peso;
    float pesoMaximo = 0;
    float pesoMinimo = 0;
    float pesoTotal = 0;
    int primeiroBoi = 1;

    printf("Digite o número de identificação e o peso dos bois (0 para encerrar):\n");

    while (1) {
        scanf("%d", &numeroIdentificacao);

        if (numeroIdentificacao == 0) {
            break;
        }

        scanf("%f", &peso);

        if (primeiroBoi) {
            pesoMaximo = peso;
            pesoMinimo = peso;
            primeiroBoi = 0;
        } else {
            if (peso > pesoMaximo) {
                pesoMaximo = peso;
            }
            if (peso < pesoMinimo) {
                pesoMinimo = peso;
            }
        }

        pesoTotal += peso;
    }

    if (!primeiroBoi) {
        float pesoMedio = pesoTotal / (pesoMaximo - pesoMinimo + 1);

        printf("Boi mais gordo: Peso = %.2f\n", pesoMaximo);
        printf("Boi mais magro: Peso = %.2f\n", pesoMinimo);
        printf("Peso médio dos bois: %.2f\n", pesoMedio);
    } else {
        printf("Nenhum boi registrado.\n");
    }

    return 0;
}
