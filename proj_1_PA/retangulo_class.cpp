#include <iostream>
#include "retangulo_class.h"
using namespace std;

Retangulo::Retangulo(float mx,float my, float _altura,float _largura){
  this->setV(mx,my);
  this->setV(mx+largura,my);
  this->setV(mx+largura,my+altura);
  this->setV(mx,my+altura);


}
