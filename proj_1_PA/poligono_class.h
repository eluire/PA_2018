#ifndef POLIGONO_H
#define POLIGONO_H
#define NMAX 100
#include "point_class.h"
#include <iostream>

class Poligono{

private:

	Point arr[NMAX];
	unsigned int N;
	void copiar(Poligono Pol);
	void limpar();

public:
 	// contrutores inline
	inline Poligono():N(0){limpar();}
	inline Poligono(const Poligono &Pol){copiar(Pol);}
	inline ~Poligono(){limpar();}
	//metodos
	void setV(float x,float y);
	inline unsigned getN(){return N;}
	void translada(float a, float b);
	double Area();
	void printpol();
	void rotation(Point P1,float ang);
	Point cmass();
};



#endif
