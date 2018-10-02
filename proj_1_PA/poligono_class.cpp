#include <iostream>
#include "poligono_class.h"
#include <cmath>
#define PI 3.1415
using namespace std;

// funçoes Base
void Poligono::copiar(Poligono Pol){

	for (int i=0; i<NMAX; i++){
		 arr[i].setXY(Pol.arr[i].getX(),Pol.arr[i].getY());
		}
}
void Poligono::limpar(){

	for(int i=0;i<N;i++){
		arr[i].setXY(0,0);
	}
}
// metodos
void Poligono::setV(float mx, float my){
	// colocar um novo verticie
	arr[N].setXY(mx,my);
	N++;

}
void Poligono::translada(float a, float b){
	for(int i=0;i<N;i++){
		//translada
		arr[i].setXY(arr[i].getX()+a,arr[i].getY()+b);
	}
}
double Poligono::Area(){

	// Initialze area
	double area = 0.0;

	// Calculate value of shoelace formula
	int j = N - 1;
	for (int i = 0; i < N; i++)
	{
			area += (arr[j].getX() + arr[i].getX()) * (arr[j].getY() - arr[i].getY());
			j = i;  // j is previous vertex to i
	}

	// Return absolute value
	return abs(area / 2.0);
}
void Poligono::rotation(Point P1,float ang){
		//transformando de graus para rad
		float x = ((ang/180)*PI);
		//translada o poligono para o ponto informado
			for (int i = 0; i < N; i++) {
					arr[i].translada(P1.getX(),P1.getY());
			}
			// rotaciona o poligono
			for (int i = 0; i < N; i++) {
					arr[i].setX(arr[i].getX()*cos(ang)-arr[i].getY()*sin(ang));
					arr[i].setY(arr[i].getX()*sin(ang)+arr[i].getY()*cos(ang));
			}
			//volta para o centro
			for (int i = 0; i < N; i++) {
					arr[i].translada((-1*(P1.getX())),(-1*(P1.getY())));
			}
}
void Poligono::printpol() {
		// printa o poligono
		for(int i=0;i<N;i++){
			cout<<"( "<<arr[i].getX()<<","<<arr[i].getY()<<" ) -> ";
		}
		cout<<"( "<<arr[0].getX()<<","<<arr[0].getY()<<" )"<<endl;
}
Point Poligono::cmass(){
		Point P1;
		float somax =0;
		float somay =0;
		for(int i=0;i<N;i++){
			somax += arr[i].getX();
			somax += arr[i].getY();
		}
		P1.setXY(somax/N,somay/N);
		return P1;
}
