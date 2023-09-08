/*screva um programa que leia a altura e o raio de um cilindro circular e imprima o volume*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	float volume,altura,raio,pi=3.14;
	printf("Altura: ");
	scanf("%f",&altura);
	printf("Raio: ");
	scanf("%f",&raio);
	volume = pi*(raio*raio)*altura;
	printf("Volume: %.2f",volume);
	
}
