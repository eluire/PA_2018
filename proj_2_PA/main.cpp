#include "figura_geometrica.h"
#include "screen.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(void){

  /*  Screen tela(50,50,'X');
  Figura_geometrica *random;
  Reta ret(1,1,5,5);
  Circulo circle(10,10,5,1);
  Retangulo square(20,20,5,5,1);
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
*/
ifstream file;
Screen tela;
vector<Figura_geometrica *> figs;

file.open("figuras.txt");
if(!file.is_open()) {
  cout << "Error ao abrir o arquivo de instruções!\n";
  return -1;
}

while(file.good()) {
  string instruction, cmd;

  getline(file, instruction);
  instruction += " ";

  if(!file.good()) break;

  stringstream ss(instruction);

  ss >> cmd;

  if(cmd.compare("dim") == 0) {
    int nl, nc;

    ss >> nl >> nc;

    tela = Screen(nl,nc);

  }else if(cmd.compare("line") == 0) {
    int x0, y0, x1, y1;
    char brush;

    ss >> x0 >> y0 >> x1 >> y1 >> brush;

    if(ss.good()){
      figs.push_back(new Reta(x0, y0, x1, y1, brush));
    }else {
      figs.push_back(new Reta(x0, y0, x1, y1, ' '));
    }

  }else if(cmd.compare("rectangle") == 0) {
    int x0, y0, largura,altura;
    bool fillMode;
    char brush;

    ss >> x0 >> y0 >> largura >> altura >> fillMode >> brush;

    if(ss.good()){
      figs.push_back(new Retangulo(x0, y0, largura, altura, fillMode, brush));
    }else {
      figs.push_back(new Retangulo(x0, y0, largura, altura, fillMode, ' '));
    }

  }else if(cmd.compare("circle") == 0) {
    int xc, yc, raio;
    bool fillMode;
    char brush;

    ss >> xc >> yc >> raio >> fillMode >> brush;

    if(ss.good()){
      figs.push_back(new Circulo(xc, yc, raio, fillMode, brush));
    }else {
      figs.push_back(new Circulo(xc, yc, raio, fillMode,' '));
    }

  }
}
file.close();

for(Figura_geometrica* fig : figs) {
  fig->draw(tela);
}

cout << endl << tela << endl;

ofstream out_file;
out_file.open("output.txt");

if(!out_file.is_open()) {
  cout << "Error ao abrir o arquivo de saida!\n";
  return -1;
}

out_file << tela;

out_file.close();

return 0;
}
