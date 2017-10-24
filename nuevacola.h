#ifndef __NUEVACOLA_H__
#define __NUEVACOLA_H__
#include "colap.h"
#include <iostream>
#include <list>
using namespace std;

class nuevacola{
	private:
		list <Proceso> buffer;
	public:
		nuevacola();
		void add(Proceso p);
		void pop();
		Proceso getfirst();
		void mostrar();
		bool emp();
		bool comparar();
};
#endif

		
		


