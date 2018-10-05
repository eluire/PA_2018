#ifndef RETANGULO_H
#define RETANGULO_H
#include <iostream>
#include "poligono_class.h"


class Retangulo: public Poligono{

private:

  float altura;
  float largura;

public:
  //construtor
  /**
  @brief contrutor da classe retangulo
  @param recebe um valor de x e de y juntamente com a altura e a largura do retangulo desejado
  */
  Retangulo(float mx=0,float my=0, float _altura=0,float _largura=0);

};
#endif
