#include<stdio.h>
#include<stdlib.h>
/*Fa�a um programa que leia 3 angulos de um triangulo e diga se esse triangulo �
  um tri�ngulo ret�ngulo*/
  
int main (){
	float a,i=0;
	
	for(i=0;i<3;i++){
		scanf("%f",&a);
		if(a == 90){
			printf("retangulo");
			break;
		}
	}
	
}
