#ifndef CIRCULO_H
#define CIRCULO_H
#include "figura_geometrica.h"

class Circulo : public Figura_geometrica{

  private:
    int xc,yc,raio;
    bool fillmode;

  public:

    Circulo(int _xc, int _yc,int _raio, bool _fillmode,char brush);
    void draw(Screen &t);


};


#endif //CIRCULO_H
