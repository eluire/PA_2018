#include <iostream>
#include "point_class.h"
#include "poligono_class.h"

using namespace	std;

int main()
{

	Point p1;
	Poligono pol;
	p1.setXY(2,3);
	cout<<"p1"<<p1<<endl;
	pol.setV(1,2);
	pol.printpol();




	return 0;
}
