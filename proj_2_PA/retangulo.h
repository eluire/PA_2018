#ifndef RETANGULO_H
#define RETANGULO_H
#include "figura_geometrica.h"

class Retangulo: public Figura_geometrica{

private:
  int xi,yi,altura,largura;
  bool fillmode;
public:
  Retangulo(int _xi = 0, int _yi =0 , int _altura =0,int _largura =0 ,bool fillmode = 0,char brush = 'X');
  void draw(Screen &t);
};
void setpixel(Screen &t, int &xi, int &yi, int &altura, int &largura, char &brush);





#endif
