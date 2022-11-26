/*
Proyecto Final - Clase Alimentos
Diego Ponce de León Betanzos - A01664407
*/
#ifndef ALIMENTOS_H_
#define ALIMENTOS_H_
#include "menuu.h"
#include <sstream>
//Se llama al archivo de clase llamado como "menuu.h" para que se relacione con el archivo actual de "alimentoss.h"
using namespace std;
//Creacion de la clase alimentos con las variables privadas y publicas (no modificables y modificables)
class alimentos : public menu{
private:
	string comida;
	
public:
	alimentos() : menu(){
		comida="";
	}
	alimentos(string com, float prec, int ta){
		comida=com;
		precio=prec;
		tam=ta;
	}
	string get_comida();
	void set_comida(string );

};
// Creamos las funciones
string alimentos::get_comida(){
	return comida;
}
void alimentos::set_comida(string com){
	comida=com;
}
#endif
