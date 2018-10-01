#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;
class Point{

	private:

		float x;
		float y;

	public:
		inline Point(float mx =0,float my =0): x(mx), y(my){}// construtor por parâmetro
		inline Point(const Point& p){setXY(p.x,p.y);}// contrutor por cópia

  		void setX(float mx);
  		void setY(float my);
  		void setXY(float mx,float my);
  		inline float getX() const {return x;}
  		inline float getY() const {return y;}
  		Point add(Point P1);
  		Point sub(Point P1);
  		float norma();
  		Point translada(float a,float b);
  		void imprime();
  		friend ostream &operator<<(ostream &X, const Point &H);
  		//inline Point &operator=(const Point &P1){setXY(P1.x,P1.y);}
 	};
#endif
