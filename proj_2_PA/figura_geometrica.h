#ifndef FIGURA_GEOMETRICA_H
#define FIGURA_GEOMETRICA_H
#include "screen.h"

class Figura_geometrica{

  private:
    char brush;
  public:
    Figura_geometrica(){};
    virtual void draw(Screen &tela)=0;
    inline void set_brush(char _brush){brush = _brush;}
    inline char get_brush(){return brush;}
};
#endif
