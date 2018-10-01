#include <iostream>
#include "retangulo_class.h"
using namespace std;

Retangulo::Retangulo(float mx,float my, float _altura,float _largura){
  Pol.setV(mx,my);
  Pol.setV(mx,my+altura);
  Pol.setV(mx+largura,my+altura);
  Pol.setV(mx+largura,my);
}
