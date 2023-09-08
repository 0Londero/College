#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, j, mat[5][5], cont = 0;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf ("Informe o valor matriz [%d][%d]: ", i, j);
			scanf ("%d", &mat[i][j]);
		}
	}

	for (i = 0; i < 5; i++) {
		if (mat[i][i] == 1) {
			cont++;
		}
	}
	
	if (cont == 5) {
		cont = 0;
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				cont = cont + mat[i][j];
			}
		}
		if (cont == 5) {
			printf ("A matriz informada e identidade");
		} else {
			printf ("A matriz informada nao e identidade");
		}
	} else {
		printf ("A matriz informada nao e identidade");
	}
	
	return 0;
}
