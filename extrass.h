/*
Proyecto Final - Clase Extras
Diego Ponce de León Betanzos - A01664407
*/
#ifndef EXTRAS_H_
#define EXTRAS_H_
#include <sstream>
#include "menuu.h"
using namespace std;
//Creacion de la clase de extras con las variables privadas y publicas (no modificables y modificables)
class extras : public menu{
private:
	string extra;
	
public:
	extras() : menu(){
		extra="";
	}
	extras(string ext, float prec, int ta){
		extra=ext;
		precio=prec;
		tam=ta;
	}
	string get_extra();
	void set_extra(string );
};
// Creamos las funciones
string extras::get_extra(){
	return extra;
}
void extras::set_extra(string ext){
	extra=ext;
}
#endif
