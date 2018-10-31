#ifndef RETANGULO_H
#define RETANGULO_H
#include "figura_geometrica.h"
/**
 * @brief Retangulo é classe derivada de figura_geometrica
 */
class Retangulo: public Figura_geometrica{

private:
     /**
   * @brief xi cordenada x inicial do retangulo
   * @brief yi cordenada y inicial do retangulo
   * @brief altura altura do retangulo
   * @brief largura largura do retangulo
   */
  int xi,yi,altura,largura;
  bool fillmode;
public:
   /**
   * @brief Retangulo construtor da classe, com valores iniciais de parametros
   * @param _xi
   * @param _yi
   * @param _altura
   * @param _largura
   * @param fillmode
   * @param brush
   */
  Retangulo(int _xi = 0, int _yi =0 , int _altura =0,int _largura =0 ,bool fillmode = 0,char brush = 'X');
  void draw(Screen &t);
};
void setpixel(Screen &t, int &xi, int &yi, int &altura, int &largura, char &brush);





#endif
