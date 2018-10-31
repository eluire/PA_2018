#ifndef CIRCULO_H
#define CIRCULO_H
#include "figura_geometrica.h"
/**
 * @brief The Circulo class derivada da classe Figura geometrica
 */
class Circulo : public Figura_geometrica{

private:
    /**
     * @brief xc posição x do centro
     * @brief yc posição y do centro
     * @brief raio valor do raio
     */
    int xc,yc,raio;
    bool fillmode;

  public:

    /**
     * @brief Circulo construtor com parametros iniciais da classe inicialmente predefinidos
     * @param _xc
     * @param _yc
     * @param _raio
     * @param _fillmode
     * @param brush
     */
    Circulo(int _xc, int _yc,int _raio, bool _fillmode,char brush);
    /**
     * @brief draw desenhar na tela
     * @param t
     */
    void draw(Screen &t);


};


#endif //CIRCULO_H
