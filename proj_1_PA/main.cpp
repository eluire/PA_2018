#include <iostream>
#include "retangulo_class.h"

using namespace	std;

int main()
{

	Point p1;
	Poligono pol;
	p1.setXY(2,3);
	cout<<"p1"<<p1<<endl;
	pol.setV(1,2);
	pol.printpol();
	Retangulo ret(1,1,1,1);
	cout<<""<<endl;
	ret.printpol();




	return 0;
}
