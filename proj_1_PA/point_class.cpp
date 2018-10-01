#include "point_class.h"
#include <iostream>
#include <cmath>

using namespace std;

// metodos
void Point::setX(float mx){
	x = mx;
}
void Point::setY(float my){
	y = my;
}
void Point::setXY(float mx,float my){
	x = mx;
	y = my;
}
Point Point::add(Point P1){
	Point add;
	add.x = P1.x + x;
	add.y = P1.y + y;
	return add;
}
Point Point::sub(Point P1){
	Point sub;
	sub.x = P1.x - x;
	sub.y = P1.y - y;
	return sub;
}
float Point::norma(){
	return sqrt((x*x)+(y*y));
}
Point Point::translada(float a, float b){
	Point trans;
	trans.x = x+a;
	trans.y = y+b;
	return trans;
}
void Point::imprime(){

	cout<<"( "<<x<<"x , "<<y<<"y )"<<endl;
}
// sobrecaga do operador <<
ostream &operator<<(ostream &X, const Point &H){

		X<<"("<<H.x<<", "<<H.y<<")"<<endl;
		return X;
}
