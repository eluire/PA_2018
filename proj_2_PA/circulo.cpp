#include <iostream>
#include "circulo.h"
using namespace std;

Circulo::Circulo(int _xc, int _yc,int _raio,bool _fillmode){

  xc = _xc;
  yc = _yc;
  raio =_raio;
  fillmode = _fillmode;
}
void Circulo::draw(Screen &t){

    int x = raio-1;
    int y = 0;
    int dx = 1;
    int dy = 1;
    int err = dx - (raio << 1);
    if(fillmode =0){
      while (x >= y)
      {
          t.setpixel(xc + x, yc + y);
          t.setpixel(xc + y, yc + x);
          t.setpixel(xc - y, yc + x);
          t.setpixel(xc - x, yc + y);
          t.setpixel(xc - x, yc - y);
          t.setpixel(xc - y, yc - x);
          t.setpixel(xc + y, yc - x);
          t.setpixel(xc + x, yc - y);

          if (err <= 0)
          {
              y++;
              err += dy;
              dy += 2;
          }

          if (err > 0)
          {
              x--;
              dx += 2;
              err += dx - (raio << 1);
          }
      }
  }
    else if(fillmode =1){
      while(raio!=0) {
        while (x >= y)
        {
            t.setpixel(xc + x, yc + y);
            t.setpixel(xc + y, yc + x);
            t.setpixel(xc - y, yc + x);
            t.setpixel(xc - x, yc + y);
            t.setpixel(xc - x, yc - y);
            t.setpixel(xc - y, yc - x);
            t.setpixel(xc + y, yc - x);
            t.setpixel(xc + x, yc - y);

            if (err <= 0)
            {
                y++;
                err += dy;
                dy += 2;
            }
            if (err > 0)
            {
                x--;
                dx += 2;
                err += dx - (raio << 1);
            }
        }

       //getting the next circle until raio = 0
        raio = raio - 1;

        x = raio-1;
        y = 0;
        dx = 1;
        dy = 1;
        err = dx - (raio << 1);

    }
  }
}
