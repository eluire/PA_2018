#ifndef POLIGONO_H
#define POLIGONO_H
#define NMAX 100
#include "point_class.h"
#include <iostream>

class Poligono{

private:

	Point arr[NMAX];
	unsigned int N;
	///funçoes Base
	/**
	@brief funçao responsável por copiar os verticies de um poligono para outro
	*/
	void copiar(Poligono Pol);
	/**
	@brief unção responsável por zerar todos os pontos do poligono
	*/
	void limpar();

public:
	/**
	@brief construtor por default:
	*inicia o poligono sem nenhum ponto cadastrado
	*/
	inline Poligono():N(0){limpar();}
	/**
	@brief construtor por parâmetro:
	@param inicia o poligono com os pontos que estam no poligono que foi passado como parâmetro
	*/
	inline Poligono(const Poligono &Pol){copiar(Pol);}
	/**
	@brief destrutor:
	*zera todos os verticies do poligono
	*/
	inline ~Poligono(){limpar();}
	/// metodos
	/**
	@briefmetodo responsável por cadastrar um novo verticie ao polinômio.
	@parametodo recebe como parâmetro as cordenadas x e y do novo verticie.
	*/
	void setV(float x,float y);
	/**
	@brief metodo responsável por retornar o número de verticies do poligono
	@param nao recebe argumentos mas retorna o numero de verticies do tipo unsigned int
	*/
	inline unsigned getN(){return N;}
	/**
	@brief metodo responsável por transladar o poligono para um determinada posição definida pelo usuário
	@param etodo recebe como parâmetro as distancias a e b, as mesmas serão somadas a todos os pontos do poligono da seguinte forma:
	*condenada x+a e cordenada y+b.
	*/
	void translada(float a, float b);
	/**
	@brief metodo responsável por calcular a Área do poligono utizando como base o metodo de shurley
	@param metodo não recebe nada como parâmetro mas retorna o valor da área do tipo double
	*/
	double Area();
	/**
	@brief metodo responsável por imprimir o poligono
	*/
	void printpol();
	/**
	@brief metodo responsável por rotacionar o poligono com base no ponto que for passado como parâmetro
	@param metodo recebe como parâmetro o ponto que será a base para a rotação e o ângulo o qual o poligono será rotacionado
	*/

	void rotation(Point P1,float ang);
	/**
	@brief metodo responsável por calcular o centro de massa do poligono
	*
	@param não recebe nenhum argumento mas retorna o ponto do centro de massa
	*/
	Point cmass();
};



#endif
