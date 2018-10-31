#ifndef RETA_H
#define RETA_H
#include "figura_geometrica.h"

/**
 * @brief A classe Reta configura uma reta
 */
class Reta : public Figura_geometrica{

private:
    /**
      * @brief xi valor de x inicial
      * @brief yi valor de y inicial
      * @brief xf valor de x final
      * @brief yf valor de y final
      */
  int xi,yi,xf,yf;
public:
  /**
   * @brief Reta construtor da classe no qual configura com parametros iniciais predefinido
   * @param _xi inicia com 0
   * @param _yi inicia com 0
   * @param _xf inicia com 0
   * @param _yf inicia com 0
   * @param _brush caractere da reta
   */
  Reta(int _xi,int _yi,int _xf,int _yf,char _brush);

  /**
     * @brief draw desenha a reta na tela
     * @param t
     */
  void draw(Screen &t);
};

int Sinal(int n);

#endif // RETA_H
