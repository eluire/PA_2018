#include "screen.h"
#include <iostream>
using namespace std;

int main(void){

  Screen tela(10,10,'X');
  tela.show_screen();
  tela.setpixel(5,5);
  cout<<"\n";
  tela.show_screen();



  return 0;
}
