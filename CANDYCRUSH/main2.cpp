#include "CandyCrush.h"

int main(){
	srand(time(NULL));
	juego part=crear();
	int mov=35;
	imprimir(part,part.puntos,mov);
	while(mov>=0){
		part=jugada(part);
		mov--;
		part=puntos(part);
		imprimir(part,part.puntos,mov);
	}
	cout<<"\n\n\n----------Tu puntaje fue de: "<<puntos<<" ----------"<<endl;
	return 0;
}