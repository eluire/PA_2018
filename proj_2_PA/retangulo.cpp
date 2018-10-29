#include "retangulo.h"
#include "reta.h"
#include <iostream>
using namespace std;

Retangulo::Retangulo(int _xi,int _yi,int _altura, int _largura,bool _fillmode){
  xi =_xi;
  yi =_yi;
  altura =_altura;
  largura =_largura;
}
void Retangulo::draw(Screen &t){
  Reta bottom(xi,yi,xi+largura,yi);
  Reta right(xi+largura,yi,xi+largura,yi+altura);
  Reta top(xi+largura,yi+altura,xi,yi+altura);
  Reta left(xi,yi+altura,xi,yi);
  bottom.draw(t);
  right.draw(t);
  top.draw(t);
  left.draw(t);
}
