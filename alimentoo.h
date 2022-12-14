/*
Proyecto Final - Clase Alimento
Diego Ponce de Le?n Betanzos - A01664407
*/
#ifndef ALIMENTO_H_
#define ALIMENTO_H_
#include "productoo.h"
#include <sstream>
//Se llama al archivo de clase llamado como "productoo.h" para que se relacione con el archivo actual de "alimentoa.h"
using namespace std;
//Creacion de la clase alimento con las variables privadas y publicas (no modificables y modificables)
class alimentos : public producto{
private:
	string comida;
	
public:
	alimentos() : producto(){
		comida="";
	}
	alimentos(string com, float prec, int ta){
		comida=com;
		precio=prec;
		tam=ta;
	}
	string get_comida();
	void set_comida(string);

};
//Creamos las funciones
string alimentos::get_comida(){
	return comida;
}
void alimentos::set_comida(string com){
	comida=com;
}
#endif
