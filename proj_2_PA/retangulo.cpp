#include "retangulo.h"
#include "reta.h"
#include <iostream>
using namespace std;

Retangulo::Retangulo(int _xi,int _yi,int _altura, int _largura,bool _fillmode,char _brush){
  xi =_xi;
  yi =_yi;
  altura =_altura;
  largura =_largura;
  fillmode =_fillmode;
  brush =_brush;
}
void Retangulo::draw(Screen &t){
  t.set_brush(brush);
  if(fillmode == 0){
    Reta bottom(xi,yi,xi+largura,yi);
    Reta right(xi+largura,yi,xi+largura,yi+altura);
    Reta top(xi+largura,yi+altura,xi,yi+altura);
    Reta left(xi,yi+altura,xi,yi);
    bottom.draw(t);
    right.draw(t);
    top.draw(t);
    left.draw(t);
  }
  else{
    Reta bottom(xi,yi,xi+largura,yi);
    Reta right(xi+largura,yi,xi+largura,yi+altura);
    Reta top(xi+largura,yi+altura,xi,yi+altura);
    Reta left(xi,yi+altura,xi,yi);
    bottom.draw(t);
    right.draw(t);
    top.draw(t);
    left.draw(t);

    while (largura != 0 && altura !=0) {
      largura = largura -1;
      altura = altura -1;
      bottom.redefine(xi,yi,xi+largura,yi);
      right.redefine(xi+largura,yi,xi+largura,yi+altura);
      top.redefine(xi+largura,yi+altura,xi,yi+altura);
      left.redefine(xi,yi+altura,xi,yi);
      bottom.draw(t);
      right.draw(t);
      top.draw(t);
      left.draw(t);
    }
  }
}
