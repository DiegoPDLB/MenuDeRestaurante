/*
Proyecto Final - Clase producto 
Diego Ponce de León Betanzos - A01664407
*/
#ifndef PRODUCTO_H_
#define PRODUCTO_H_
using namespace std;

//Creacion de la clase me con las variables protected y publicas (no modificables y modificables)
class producto{
protected:
	float precio;
	int tam;
	
public:
	producto(): precio(0.0), tam(0){};
	producto(float prec, int ta){
		precio=prec;
		tam=ta;
	} 
	float get_precio();
	int get_tam();
	void set_precio(float );
	void set_tam(int );
};
// Creamos las funciones
float producto::get_precio(){
	return precio;
}
int producto::get_tam(){
	return tam;
}
void producto::set_precio(float prec){
	precio=prec;
}
void producto::set_tam(int ta){
	tam=ta;
}
#endif
