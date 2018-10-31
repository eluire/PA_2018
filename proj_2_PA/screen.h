#ifndef SCRERN_H
#define SCRERN_H

#include <iostream>
#include <vector>
using namespace std;
class Screen {

private:
  int nl,nc;
  char brush;
  //criando uma matriz de vectors
  vector<vector<char>> matrix;
  void start_matrix();

public:
  //construtores
  // seta um novo pixel na tela(com o mesmo brush do obj)
  Screen(int _nl,int _nc);
  //metodos
  void setpixel(int x ,int y);
  void clear();
  void set_brush(char _brush);
  // sobrecarga do operador <<
  friend ostream& operator<<(ostream &os,Screen &t);
};

#endif
