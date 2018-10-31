#include "screen.h"
#include <iostream>
using namespace std;

Screen::Screen(int _nl,int _nc){
  nl = _nl;
  nc = _nc;
  matrix = vector<vector<char>>(nl, vector<char>(nc, ' '));
}
void Screen::setpixel(int x ,int y){
  matrix[x][y] = brush;
}
void Screen::clear(){

  for (int i=0; i<nl; i++){
    for (int j=0; j<nc; j++){
      matrix[i][j] = ' ';
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
