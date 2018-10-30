#ifndef FIGURA_GEOMETRICA_H
#define FIGURA_GEOMETRICA_H
#include "screen.h"
/**
 * @brief A classa Figura_geometrica é
 * a classe base para as demais.
 */
class Figura_geometrica{

  private:
    char brush;
  public:
    /**
     * @brief Figura_geometrica construtor da classa
     */
    Figura_geometrica(){};
    /**
     * @brief draw desenho
     * @param tela
     */
    virtual void draw(Screen &tela)=0;
    /**
     * @brief set_brush
     * @param _brush
     */
    inline void set_brush(char _brush){brush = _brush;}
    /**
     * @brief get_brush
     * @return
     */
    inline char get_brush(){return brush;}
};
#endif
