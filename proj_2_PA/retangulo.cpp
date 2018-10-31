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
void setpixel(Screen &t, int &xi, int &yi, int &altura, int &largura, char &brush){
  Reta bottom(xi,yi,xi+largura,yi,brush);
  Reta right(xi+largura,yi,xi+largura,yi+altura,brush);
  Reta top(xi+largura,yi+altura,xi,yi+altura,brush);
  Reta left(xi,yi+altura,xi,yi,brush);
  bottom.draw(t);
  right.draw(t);
  top.draw(t);
  left.draw(t);
}
void Retangulo::draw(Screen &t){
  if(fillmode == 0){
    setpixel(t,xi,yi,altura,largura,brush);
  }
  else{
    while (largura != 0 && altura !=0) {
      setpixel(t,xi,yi,altura,largura,brush);
      largura = largura -1;
      altura = altura -1;

    }
  }
}
