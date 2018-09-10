#include <stdio.h>

int soma(int a,int b){

	return a+b;
}


int main()
{
	int x,y,z;
	int (*p)(int,int);// declaração do ponteiro pra função 

	printf("digite 2 numeros\n");
	scanf("%d %d",&x,&y);
	p =soma; //ponteiro recebe o endereço da função soma 
	z = p(x,y);
	printf("soma =%d\n",z);

	return 0;
}