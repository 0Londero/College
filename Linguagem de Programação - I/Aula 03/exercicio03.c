#include<stdio.h>
#include<stdlib.h>
  
int main (){
	int n1,n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	n1+=n2;
	printf("%d\n",n1);
	if(n1%2==0){
		printf("par");
	}else{
		printf("Impar");
	}
}
