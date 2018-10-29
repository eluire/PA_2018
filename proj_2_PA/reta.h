#ifndef RETA_H
#define RETA_H
#include "figura_geometrica.h"

class Reta : public Figura_geometrica{

  private:
    int xi,yi,xf,yf;

  public:

    Reta(int _xi = 0,int _yi = 0,int _xf = 0,int _yf = 0,char _brush = '.');
    void draw(Screen &t);
    
};
  int Sinal(int n);

#endif
