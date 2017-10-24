#include "nuevacola.h"
#include <iostream>
#include "colap.h"
#include <algorithm>
#include <list>

using namespace std;

nuevacola::nuevacola(){ // constructor creo cola 	
}
bool comparar(Proceso P, Proceso Q){
	return P.getPrioridad()<Q.getPrioridad();
}
	

void nuevacola::add(Proceso P){ // de derecha a izquierda [..........P]
	buffer.push_back(P);
	buffer.sort(comparar);
}

void nuevacola::pop(){ // de derecha izquierda [P...]->  [.......]
	buffer.pop_back();
}
Proceso nuevacola::getfirst(){ // de derecha a izquierda [P....]-> P
	return buffer.back();
}
void nuevacola::mostrar(){// se copia el buffer en otro para no perder los datos 
	for(list<Proceso>::iterator algo=buffer.begin(); algo!= buffer.end(); algo++){
		algo->mostrarse();
		}
		cout<<endl;
}
bool nuevacola::emp(){
	return buffer.empty();
}


	
	
