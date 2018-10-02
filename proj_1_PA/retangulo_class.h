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
  Retangulo(float mx=0,float my=0, float _altura=0,float _largura=0);

};
#endif
