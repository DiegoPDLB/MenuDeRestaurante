/*
Proyecto Final - Clase Bebida
Diego Ponce de León Betanzos - A01664407
*/
#ifndef BEBIDA_H_
#define BEBIDA_H_
#include "productoo.h"
#include <sstream>
using namespace std;
//Creacion de la clase bebida con las variables privadas y publicas (no modificables y modificables)
class bebidas : public producto{
private:
	string bebida;
	
public:
	bebidas() : producto(){
		bebida="";
	}
	bebidas (string beb, float prec, int ta){
		bebida=beb;
		precio=prec;
		tam=ta;
	}
	string get_bebida();
	void set_bebida(string);
};
// Creamos las funciones
string bebidas::get_bebida(){
	return bebida;
}
void bebidas::set_bebida(string beb){
	bebida=beb;
}
#endif
