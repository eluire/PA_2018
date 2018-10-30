#ifndef RETA_H
#define RETA_H
#include "figura_geometrica.h"

class Reta : public Figura_geometrica{

private:
  int xi,yi,xf,yf;
  char brush;
public:

  Reta(int _xi = 0,int _yi = 0,int _xf = 0,int _yf = 0,char _brush = 'X');
  void draw(Screen &t);
  void redefine(int _xi ,int _yi ,int _xf ,int _yf);
  void set_brush(char _brush);
};
int Sinal(int n);

#endif
