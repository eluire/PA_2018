#include <iostream>
#include <poligono_class.h>
#include <cmath>
#define PI 3.1415
using namespace std;
// funçoes Base
void Poligono::copiar(Poligono Pol){

	for (int i=0; i<NMAX; i++){
			arr[i].setX() = Pol[i].getX();
			arr[i].setY() = Pol[i].getY();
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
	arr[N+1].setXY(mx,my);
	N++;

}
void Poligono::translada(float a, float b){
	for(i=0;i<N;i++){
		//translada
		arr[i].setXY(getX()+a,getY()+b);
	}
}
unsigned Poligono::Area(){
	//Area do Poligono
	for(i=0;i<N;i++){

		soma += p[i].getX() + p[i+1].getY() - p[i+1].getX() - p[i].getY();
	}
	return soma/2;
	}
void Poligono::rotation(Point P1 float ang){
		//transformando de graus para rad
		float x = ((ang/180)*PI);
		//translada o poligono para o ponto informado
			for (i = 0; i < N; i++) {
					arr[i].translada(P1.getX(),P1.getY());
			}
			// rotaciona o poligono
			for (i = 0; i < N; i++) {
					arr[i].setX(arr[i].getX()*cos(ang)-arr[i].getY()*sin(ang));
					arr[i].setY(arr[i].getX()*sin(ang)+arr[i].getY()*cos(ang));
			}
			//volta para o centro
			for (i = 0; i < N; i++) {
					arr[i].translada((-1*(P1.getX())),(-1*(P1.getY())));
			}
}
void Poligono::printpol() {
		// printa o poligono
		for(i=0;i<N;i++){
			cout<<" ( "<<arr[i].getX()<<" -> "<<arr[i].getY()<<" ) ";
		}
}
