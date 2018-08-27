#include <stdio.h>

int main()
{
	int mat[4], *p, x;

	p = mat + 1;
	//CORRETO o ponteiro p está recebendo o endereço do 2º elemento do array
	p = mat++; 
	// ERRADO ponteiro nao incrementado corretamente 
	p = ++mat;
	// ERRADO ponteiro nao incrementado corretamente
	x = (*mat)++;
	// CORRETO a variável x recebe oque tem dentro da posição 0 do array e soma mais 1
	return 0;
}
