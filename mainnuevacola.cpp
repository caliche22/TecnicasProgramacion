#include <iostream>
#include <stdio.h>  
#include "nuevacola.cpp"
#include "proceso.cpp"
#include "unidadp.cpp"
#include <cstdlib>
#include <time.h>
// se incluyen las clases del profesor 
// se pone el codigo hecho en papel corregido

using namespace std;


int main(){
	srand(time(NULL));
	nuevacola cp;
	UnidadProcesamiento cpu;
	
	
	for (int i=1; i<=10; i++){
		Proceso p(i);
		p.mostrarse();
		cp.add(p);
	}
	while(cp.emp()==false){
		cp.mostrar();
		Proceso q= cp.getfirst();
		cp.pop();
		cpu.procesar(q);
		if(q.getEstado()!="Finished"){
			cp.add(q);
		}
	/*do{
		cp.mostrarse();
		Proceso q=cp.getfirst();
		cp.pop();
		cpu.procesar(q);
		if(q.getEstado()!="Finished"){
			cp.add(q);
		}
		
	}while(cp.emp()==false);*/
	}
	return 0;
}
	

