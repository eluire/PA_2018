#ifndef CIRCULO_H
#define CIRCULO_H
#include "figura_geometrica.h"

class Circulo : private Figura_geometrica{

  private:
    int xc,yc,raio;
    bool fillmode;

  public:

    Circulo(int _xc = 0 , int _yc =0 ,int _raio = 0, bool _fillmode = 0);
    void draw(Screen &t);


};


#endif
