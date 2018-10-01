#ifndef RETANGULO_H
#define RETANGULO_H
#include <iostream>
#include "poligono_class.cpp"


class Retangulo: public Poligono{

private:

  Poligono Pol;
  float altura;
  float largura;

public:
  //construtor
  Retangulo(float mx,float my, float _altura,float _largura);

};
