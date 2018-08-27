#include <stdlib.h>

int main()
{
	int i,j,*p,*q;

	p = i;
	// ERRADO p só pode armazenar endereços 
	q = &j;
	// CORRETO
	p = &*&i;
	//CORRETO
	i = (*&)j;
	// ERRADO, parenteses mal colocado 
	i = *&j;
	// CORRETO
	i = *&*&j;
	// CORRETO
	q = *p;
	// ERRADO,ponteiro só armazena endereços
	i = (*p)++ + *q;
	
	return 0;
}