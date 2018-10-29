#include "figura_geometrica.h"
#include "screen.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include <iostream>
using namespace std;

int main(void){

  Screen tela(50,50,'X');
  Figura_geometrica *random;
  Reta ret(1,1,5,5);
  Circulo circle(10,10,5,1);
  Retangulo square(20,20,5,5,0);
  //Reta top(1,1,1,10);
  //Reta left(1,10,5,5);
  ret.draw(tela);
  circle.draw(tela);
  square.draw(tela);
  //top.draw(tela);
  //left.draw(tela);
  cout<<tela;
  //tela.show_screen();
  //tela.setpixel(5,5);
  cout<<"\n";
  //cout<<tela;
  //tela.show_screen();



  return 0;
}
