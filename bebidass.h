/*
Proyecto Final - Clase Bebidas
Diego Ponce de León Betanzos - A01664407
*/
#ifndef BEBIDAS_H_
#define BEBIDAS_H_
#include "menuu.h"
#include <sstream>
using namespace std;
//Creacion de la clase bebidas con las variables privadas y publicas (no modificables y modificables)
class bebidas : public menu{
private:
	string bebida;
	
public:
	bebidas() : menu(){
		bebida="";
	}
	bebidas (string beb, float prec, int ta){
		bebida=beb;
		precio=prec;
		tam=ta;
	}
	string get_bebida();
	void set_bebida(string );
};
// Creamos las funciones
string bebidas::get_bebida(){
	return bebida;
}
void bebidas::set_bebida(string beb){
	bebida=beb;
}
#endif
