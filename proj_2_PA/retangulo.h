#ifndef RETANGULO_H
#define RETANGULO_H
#include "figura_geometrica.h"

class Retangulo: public Figura_geometrica{

private:
  int xi,yi,altura,largura;
  bool fillmode;
  char brush;
public:
  Retangulo(int _xi = 0, int _yi =0 , int _altura =0,int _largura =0 ,bool fillmode = 0,char brush = 'X');
  void draw(Screen &t);
};






#endif
