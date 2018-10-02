#include <iostream>
#include "retangulo_class.h"
using namespace std;

Retangulo::Retangulo(float mx,float my, float _altura,float _largura){
  this->setV(mx,my);
  this->setV(mx,my+_altura);
  this->setV(mx+_largura,my+_altura);
  this->setV(mx+_largura,my);
}
