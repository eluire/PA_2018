#include <poligono_class.h>
#include <iostream>
#include <cmath>

using namespace std 


void poligono::criar(unsigned _N){

	if(_N == 0){
		N = 0;
		p = NULL;
		return;
	}
	N = _N;
	p = new point[N];
}
void poligono::copiar(poligono &Pol){

	criar(Pol.N);
	for (int i=0; i<Pol.N; i++){

		p[i] = Pol.p[i]; 
	}
}
void poligono::limpar(){

	if(p != NULL){
		delete []p;
	}
	N = 0;
	p = NULL;
}
void poligono::setV(const point &P1){
 	
 	point *aux;
 	aux = new point [N+1];
 	for (int i=0; i<N; i++){

		aux[i] = p[i]; 
	}
	aux[N] = P1;
	delete []p;
	p = aux;
}
unsigned poligono::Area(){
	for(i=0;i<N;i++){

		soma += p[i].x + p[i+1].y - p[i+1] - p[i];
	}
	return soma/2;
	}


