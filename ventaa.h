/*
Proyecto Final - Clase Venta
Diego Ponce de León Betanzos - A01664407
*/
#ifndef VENTA_H_
#define VENTA_H_
#include <string>
#include <typeinfo>
#include "alimentoss.h"
#include "bebidass.h"
#include "extrass.h"
using namespace std;

//Creacion de la clase venta con las variables privadas y publicas (no modificables y modificables)
class venta{
private:
	float preciof;
	//Se crea un arreglo para almacenar los distintos contenidos del menú
	alimentos comidas[60];
	bebidas bebidasa[60];
	extras extrasa[60];
	
	//Registra cuantos elementos hay de cada sección
	int icomidas=0;
	int ibebidas=0;
	int iextras=0;

public:
	venta();
	venta(float );
	bool comprar(menu& ,int );
	bool agrega_contenido(alimentos& );
	bool agrega_contenido(bebidas& );
	bool agrega_contenido(extras &);
	
	float get_preciof();
	alimentos * get_comida();
	bebidas * get_bebida();
	extras * get_extra();
	int get_icomidas();
	int get_ibebidas();
	int get_iextras();
	void set_preciof(float );
};
//Funciones de venta
venta::venta(){
	preciof=0.0;
}
venta::venta(float precf){
	preciof=precf;
}
bool venta::comprar(menu &m, int n){
	float precio=m.get_precio();
	preciof += precio * n;
	return true;
}
bool venta::agrega_contenido(alimentos &m){
	comidas[icomidas]=m;
	icomidas++;
	return true;
}
bool venta::agrega_contenido(bebidas &m){
	bebidasa[ibebidas]=m;
	ibebidas++;
	return true;
}
bool venta::agrega_contenido(extras &m){
	extrasa[iextras]=m;
	iextras++;
	return true;
}
float venta::get_preciof(){
	return preciof;
}
alimentos * venta::get_comida(){
	return comidas;
}
bebidas * venta::get_bebida(){
	return bebidasa;
}
extras * venta::get_extra(){
	return extrasa;
}
int venta::get_icomidas(){
	return icomidas;
}
int venta::get_ibebidas(){
	return ibebidas;
}
int venta::get_iextras(){
	return iextras;
}
void venta::set_preciof(float precf){
	preciof=precf;
}
#endif
