#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, j, vet1[10], vet2[10], cont, dif = 0;
	
	for (i = 0; i < 10; i++) {
		printf ("Informe o %d valor do vetor 1: ", i+1);
		scanf ("%d", &vet1[i]);	
	}
	
	printf ("\n");
	
	for (i = 0; i < 10; i++) {
		printf ("Informe o %d valor do vetor 2: ", i+1);
		scanf ("%d", &vet2[i]);	
	}
	
	for (i = 0; i < 10; i++) {
		cont = 0;
		for (j = 0; j < 10; j++) {
			if (vet1[i] == vet2[j]) {
				cont++;
			}
		}
		if (cont == 0) {
			printf ("\nvet1[%d]: %d", i, vet1[i]);
			dif++;
		}
	}
	
	printf ("\n\nValores mostrados: %d", dif);
	
	return 0;
}
