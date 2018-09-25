#include "point_class.h"
#include <iostream>
#include <cmath>

using namespace std;

// metodos 
void point::setX(float mx){
	x = mx;
}
void point::setY(float my){
	y = my;
}
void point::setXY(float mx,float my){
	x = mx;
	y = my;
}
point point::add(point P1){
	point add;
	add.x = P1.x + x;
	add.y = P1.y + y;
	return add;
}
point point::sub(point P1){
	point sub;
	sub.x = P1.x - x;
	sub.y = P1.y - y; 
	return sub;
}
float point::norma(){
	return sqrt((x*x)+(y*y));
}
point point::translada(float a, float b){
	point trans;
	trans.x = x+a;
	trans.y = y+b;
	return trans;
}
void point::imprime(){

	cout<<"( "<<x<<"x , "<<y<<"y )"<<endl;
}
// sobrecaga do operador <<
ostream &operator<<(ostream &X, const point &H){

		X<<"("<<H.x<<", "<<H.y<<")"<<endl;
		return X;
}
