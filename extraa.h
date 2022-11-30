/*
Proyecto Final - Clase Extra
Diego Ponce de León Betanzos - A01664407
*/
#ifndef EXTRA_H_
#define EXTRA_H_
#include <sstream>
#include "productoo.h"
using namespace std;
//Creacion de la clase de extra con las variables privadas y publicas (no modificables y modificables)
class extras : public producto{
private:
	string extra;
	
public:
	extras() : producto(){
		extra="";
	}
	extras(string ext, float prec, int ta){
		extra=ext;
		precio=prec;
		tam=ta;
	}
	string get_extra();
	void set_extra(string);
};
// Creamos las funciones
string extras::get_extra(){
	return extra;
}
void extras::set_extra(string ext){
	extra=ext;
}
#endif
