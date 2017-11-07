#ifndef CANDY_H
#define CANDY_H

#include <iostream> 
#include <fstream> 
#include <cstdlib> 
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

#define filas 5
#define columnas 5

struct Ficha{
	char simbolo;
	int etiqueta;
};
typedef struct Ficha ficha;

struct Tablero{
	ficha mt[filas][columnas];
};
typedef struct Tablero tablero;

struct Juego{
	Tablero tab;
	int puntos;
};
typedef struct Juego juego;

juego mov_ab(juego part,int ax,int ay, int bx,int by){
	if(ax<columnas && ay<filas && bx<columnas && by<filas && ax>=0 && ay>=0 && bx>=0 && by>=0){
		ficha tmp=part.tab.mt[ay][ax];
		part.tab.mt[ay][ax]=part.tab.mt[by][bx];
		part.tab.mt[by][bx]=tmp;
	}else{
		cout<<"\nError en las cordenadas"<<endl;
	}
	return part;
} 

juego rev(juego part,int &n, char c,int x,int y){
	if(part.tab.mt[y][x].simbolo==c){
		if(part.tab.mt[y][x].etiqueta==0){
			part.tab.mt[y][x].etiqueta=2;
			n++;
			if(x+1<columnas) rev(part,n,c,x+1,y);
			if(x-1>=0) rev(part,n,c,x-1,y);
			if(y+1<filas) rev(part,n,c,x,y+1);
			if(y-1>=0) rev(part,n,c,x,y-1);
			if(n>=3) part.tab.mt[y][x].etiqueta=1;
		}else if(part.tab.mt[y][x].etiqueta==1)n=3;
	}
	return part;
}

char randficha(){
	int n=rand()%8;
	char c[] = "@#$&+?^¿";
	return c[n];
}

juego eliminar(juego part,int x,int y){
	int i;
	ficha tmp;
	tmp.etiqueta=0;
	tmp.simbolo=randficha();
	for(i=y;i>=0;i--){
		if(i==0){
			part.tab.mt[i][x]=tmp;
		}else{
			part.tab.mt[i][x] = part.tab.mt[i-1][x];
		}
	}
	return part;
}
juego puntos(juego part){
	int i,j,n;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			n=0;
			if(part.tab.mt[i][j].etiqueta!=1){
				part=rev(part,n,part.tab.mt[i][j].simbolo,j,i);
			}
		}
	}
	int punt=0;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			if(part.tab.mt[i][j].etiqueta==1){
				punt+=5;
			}
		}
	}
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			while(part.tab.mt[i][j].etiqueta==1){
				part=eliminar(part,j,i);
			}
			part.tab.mt[i][j].etiqueta=0;
		}
	}
	part.puntos+=punt;
	return part;
}

juego crear(){
	tablero tab;
	ficha tmp;
	tmp.etiqueta=0;
	int i,j;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			tmp.simbolo=randficha();
			tab.mt[i][j]=tmp;
		}
	}
	juego part;
	part.puntos=0;
	part.tab=tab;
	return part;
}

juego jugada(juego part){
	string orden;
	int ax,ay,bx,by;
	cout<<"\nDijite: <Orden> <posicion x de a> <posicion y de a> (posicion x de b) (posicion y de b)"<<endl;
	cin>>orden;
	if(orden=="ab" or orden == "hc"){
		cin>>ax>>ay>>bx>>by;
		part = mov_ab(part,ax,ay,bx,by);
	}
	if(orden=="m-"){
		cin>>ax>>ay;
		part = mov_ab(part,ax,ay,ax,ay+1);
	}
	if(orden=="m+"){
		cin>>ax>>ay;
		part = mov_ab(part,ax,ay,ax,ay-1);
	}
	if(orden=="<m"){
		cin>>ax>>ay;
		part = mov_ab(part,ax,ay,ax-1,ay);
	}
	if(orden=="m>"){
		cin>>ax>>ay;
		part = mov_ab(part,ax,ay,ax+1,ay);
	}
	return part;
}

void imprimir(juego part, int puntaje, int mov){
	int i,j;
	cout<<"\n\n-----------------------------------------------------------\n";
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("| %c ",part.tab.mt[i][j].simbolo);
		}
		cout<<"|\n";
	}
	cout<<"-----------------------------------------------"<<endl;
	cout<<"mov: "<<mov<<"   --------------   "<<"Puntos: "<<puntaje<<endl;
}

#endif


