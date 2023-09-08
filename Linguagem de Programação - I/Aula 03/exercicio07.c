#include<stdio.h>
#include<stdlib.h>
/*Faça um programa que leia 4 pontos P1(x,y), P2(x,y), P3(x,y) e P4(x,y) do sistema cartesiano
 R2 e imprima a área do quadrilátero formado por estes 4 pontos

fórmula para cálculo:
S =  ( x1y3 + x3y2 + x2y1 + x1y4 + x4y3 + x3y1 - x3y1 - x2y3 - x1y2 - x4y1 - x3y4 - x1y3) / 2 
*/


int main (){
	int x1,x2,x3,x4,y1,y2,y3,y4,s;
	printf("X1: ");
	scanf("%d",&x1);
	
	printf("Y1: ");
	scanf("%d",&y1);
	
	printf("X2: ");
	scanf("%d",&x2);
	
	printf("y2: ");
	scanf("%d",&y2);
	
	printf("X3: ");
	scanf("%d",&x3);
	
	printf("y3: ");
	scanf("%d",&y3);
	
	printf("X4: ");
	scanf("%d",&x4);
	
	printf("y4: ");
	scanf("%d",&y4);
	
	s= ( x1*y3 + x3*y2 + x2*y1 + x1*y4 + x4*y3 + x3*y1 - x3*y1 - x2*y3 - x1*y2
	 - x4*y1 - x3*y4 - x1*y3) / 2;
	
	if(s<0){
		s=s*(-1);
	} 
	printf("%d",s);
	
}
