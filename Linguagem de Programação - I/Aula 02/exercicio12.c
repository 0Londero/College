#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int mat1 [3][2], mat2 [2][3], matResultante [3][3], i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf ("Informe o valor para mat1 [%d][%d]: ", i, j);
			scanf ("%d", &mat1[i][j]);
		}
	}
	printf ("\n");
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf ("Informe o valor para mat2 [%d][%d]: ", i, j);
			scanf ("%d", &mat2[i][j]);
		}
	}
	
	printf ("\nMatriz Resultante: \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			matResultante[i][j] = ((mat1[i][0] * mat2[0][j]) + (mat1[i][1] * mat2[1][j]));
			printf ("|%d|", matResultante[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
