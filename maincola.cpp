#include <list>
#include <iostream>
// introduccion main de prueba 
using namespace std;

int main(){
	list <int> lista; // inicializo la lista  la creo
	lista.push_back(5);
	lista.push_back(8);
	lista.push_front(70);
	cout<<lista.size()<<endl;
	list <int> tmpls(lista);
	while(tmpls.empty()==false){
		int x=tmpls.front();
		cout<<x<<endl;
		tmpls.pop_front();
		
	}
	
}
