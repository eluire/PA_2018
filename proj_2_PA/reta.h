#ifndef RETA_H
#define RETA_H
#include "figura_geometrica.h"

class Reta : public Figura_geometrica{

private:
  int xi,yi,xf,yf;
public:

  Reta(int _xi,int _yi,int _xf,int _yf,char _brush);
  void draw(Screen &t);
};

int Sinal(int n);

#endif // RETA_H
