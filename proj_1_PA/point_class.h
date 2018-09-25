#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;
class point{

	private:

		float x;
		float y;
		
	public:
		inline point(float mx =0,float my =0): x(mx), y(my){}// construtor por parâmetro
		inline point(const point& p){setXY(p.x,p.y);}// contrutor por cópia

  		void setX(float mx);
  		void setY(float my);
  		void setXY(float mx,float my);
  		inline float getX() const {return x;}
  		inline float getY() const {return y;}
  		point add(point P1);
  		point sub(point P1);
  		float norma();
  		point translada(float a,float b);
  		void imprime();
  		friend ostream &operator<<(ostream &X, const point &H);
  		inline point &operator=(const point &P1){setXY(P1.x,P1.y);}
 	};
#endif