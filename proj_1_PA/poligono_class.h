#ifndef POLIGONO_H
#define POLIGONO_H
#define Nmax 100;
#include "point_class.cpp"
#include <iostream>
class poligono: public point{

private: 

	point *p;
	unsigned  N;
	void criar(unsigned _N);
	void copiar(poligono &Pol);
	void limpar();

public:
 	// contrutores inline 
	inline poligono(): N(0),p(NULL) {}
	inline poligono(const poligono &Pol){copiar(Pol);}
	inline ~poligono(){limpar();}
	// sobrecarga do operador =
	inline poligono &operator=(const poligono &Pol){if(this != Pol){limpar();copiar(Pol);}}
	//metodos
	void setV(const point &P1);
	inline unsigned getN(){return N;}
	unsigned Area();
};

#endif

	

