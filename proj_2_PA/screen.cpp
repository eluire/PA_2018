#include "screen.h"
#include <iostream>
using namespace std;

void Screen::start_matrix(){

  for (int i=0; i<nl; i++){
    vector<char> aux;
    for (int j=0;j<nc;j++){
      aux.push_back('.');
    }
   matrix.push_back(aux);
  }
}
Screen::Screen(){
  nl = 50;
  nc = 50;
  brush = '.';
  start_matrix();
}
Screen::Screen(int _nl,int _nc,char _brush){
  nl = _nl;
  nc = _nc;
  brush = _brush;
  start_matrix();
}
void Screen::setpixel(int x ,int y){
  matrix[x-1][y-1] = brush;
}
void Screen::clear(){

  for (int i=0; i<nl; i++){
    for (int j=0; j<nc; j++){
      matrix[i][j] = '.';
    }
  }
}
void Screen::set_brush(char _brush){
  brush = _brush;
}
ostream& operator << (ostream &os,Screen &t){
 for (int i=0; i<t.nl; i++){
    os<<"[ ";
    for (int j=0; j<t.nc; j++){
      os<<t.matrix[i][j]<<"";
    }
    os<<"]"<<'\n';
  }
return (os);
}
