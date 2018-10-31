#ifndef FIGURA_GEOMETRICA_H
#define FIGURA_GEOMETRICA_H
#include "screen.h"

class Figura_geometrica{

  protected:
    char brush;
  public:
    Figura_geometrica(){};
    virtual void draw(Screen &tela)=0;

};
#endif
