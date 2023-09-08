#include<stdio.h>
#include<stdlib.h>
/*Faça um programa que leia 3 números inteiros e imprima qual deles é o maior e qual é o menor
  Além de dizer se o do meio é maior, menor ou igual a média dos 3*/
  
int main (){
	
	int n1,n2,n3,m,medio,maior,menor;
	
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	
	maior = n1>n2?(n1>n3?n1:n3) : (n2>n3?n2:n3);
	menor = n1<n2?(n1<n3?n1:n3) : (n2<n3?n2:n3);
	medio = (n1+n2+n3) - (maior+menor);
	printf("Maior: %d",maior);
	printf("\nMenor: %d\n",menor);
	m = (maior+menor+medio)/3;
	printf("Media: %d\n",m);
	if (medio<m){
		printf("Medio menor que a soma dos 3");
	}else{
		if(medio>m){
			printf("Medio maior que a soma dos 3");
		}
		else{
			printf("Medio igual a soma dos 3");
		}
	}
}
