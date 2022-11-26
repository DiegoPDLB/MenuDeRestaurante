/*
Proyecto Final - Main
Diego Ponce de León Betanzos - A01664407
La orden de comida es un codigo que se divide en el main, menú, alimentos, bebidas, extras y venta.
Sirve para tomar tu orden y darte un precio final de un menú creado.
*/
#include <iostream>
#include <string>
#include "ventaa.h"
// Aquí se relaciona el archivo main con el archivo de la clase de "ventaa.h" para que introducirlo en el actual "mainn.cpp"
using namespace std;

void report(venta);

int main(){
		
	venta menug; //Aquí se empieza con la creacion del menú
		
		//Aqui preparo los alimentos que componen la primera sección	
		alimentos alimento0("No quiero Alimento", 00, 00);
		alimentos alimento1("Quesadillas", 30, 125);
		alimentos alimento2("Chilaquiles", 85, 232);
		alimentos alimento3("Tacos", 15, 50);
		alimentos alimento4("Sandwich", 70, 150);
		alimentos alimento5("Pizza", 120, 400);
		alimentos alimento6("Hamburguesa", 150, 400);
		
		//Con respecto a su arreglo se agragan los alimentos
		menug.agrega_contenido(alimento0);
		menug.agrega_contenido(alimento1);
		menug.agrega_contenido(alimento2);
		menug.agrega_contenido(alimento3);
		menug.agrega_contenido(alimento4);
		menug.agrega_contenido(alimento5);
		menug.agrega_contenido(alimento6);
		
		//Aquí se preparan las bebidas que corresponden a la segunda sección 
		bebidas bebida0("No quiero bebida", 00, 00);
		bebidas bebida1("Refresco", 25.00, 600);
		bebidas bebida2("Cafe", 30, 250);
		bebidas bebida3("Agua", 15, 600);		
		bebidas bebida4("Jugo", 20.00, 450);			
		bebidas bebida5("Limonada", 28, 600);
		bebidas bebida6("Agua mineral", 20, 400);			
		bebidas bebida7("Licuado", 40, 600);
		
		//Se guardan las bebidas en su respectivo arreglo
		menug.agrega_contenido(bebida0);		
		menug.agrega_contenido(bebida1);
		menug.agrega_contenido(bebida2);
		menug.agrega_contenido(bebida3);
		menug.agrega_contenido(bebida4);
		menug.agrega_contenido(bebida5);
		menug.agrega_contenido(bebida6);
		menug.agrega_contenido(bebida7);
		
		//Preparo los Ensaladaalimentos extra que componen la tercera sección
		extras extra0("No quiero un extra", 00, 00);
		extras extra1("Papas a la francesa", 20, 50);
		extras extra2("Arroz", 18.00, 80);
		extras extra3("Frijoles", 8.00, 50);
		extras extra4("Salsa", 5.00, 40);
		extras extra5("Guacamole", 15, 40);
		
		//Se guardan los extras en su respectivo arreglo
		menug.agrega_contenido(extra0);
		menug.agrega_contenido(extra1);
		menug.agrega_contenido(extra2);
		menug.agrega_contenido(extra3);
		menug.agrega_contenido(extra4);
		menug.agrega_contenido(extra5);
		
		//Un cliente compra los siguientes alimentos
		menug.comprar(menug.get_comida()[2],1);
		menug.comprar(menug.get_bebida()[4],1);
		menug.comprar(menug.get_bebida()[0],1);
		menug.comprar(menug.get_extra()[3],1);
		
		//Los alimentos elegidos se agregan a un arreglo de venta	
		report(menug);
}
void report(venta venta) {
	
	//Finalmente, realiza la sumatoria de la cantidad de alimentos comprados y se muestra el precio final
	int pf = 0,pa;
	int a,b,e;
	int opt;
	while (true){
		cout<<"Usando los numeros del menú"<<endl;
		//Muestra en la pantalla, todos los alimentos de la sección
		cout<<"La sección de platillos contiene:"<<endl;
		for (int i=0; i<venta.get_icomidas(); i++){
			alimentos temp=venta.get_comida()[i];
			cout<< i + 1 << ".- "<< temp.get_comida()<<" a $"<<temp.get_precio()<<" con una cantidad de "<<temp.get_tam()<<"g"<<endl;
			}
		cout<<endl;
		cout<<"\nElige un alimento: "<<endl;
		cin>>a;
		cout <<"-------------------------------------------------------------------" <<endl;

		//Muestra en la pantalla, todas las bebidas de la sección con su precio y su peso
		cout<<"La sección de bebidas contiene:"<<endl;
		for (int i=0; i<venta.get_ibebidas(); i++){
			bebidas temp=venta.get_bebida()[i];
			cout<< i + 1 << ".- "<<temp.get_bebida()<<" a $"<<temp.get_precio()<<" con una cantidad de "<<temp.get_tam()<<"ml"<<endl;
		}
		cout<<endl;
		cout<<"Elige una bebida: "<<endl;
		cin>>b;
		cout <<"-------------------------------------------------------------------" <<endl;


		//Muestra en la pantalla, todos los extras de la sección
		cout<<"La sección de extras contiene:"<<endl;
		for (int i=0; i<venta.get_iextras(); i++){
			extras temp=venta.get_extra()[i];
			cout<< i + 1 << ".- "<<temp.get_extra()<<" a $"<<temp.get_precio()<< " con una cantidad de "<<temp.get_tam()<<"g"<<endl;
		}
		cout<<endl;
		cout<<"Elige un extra: "<<endl;
		cin>>e;
		cout <<"-------------------------------------------------------------------" <<endl;
		
		alimentos tempA=venta.get_comida()[a-1];
		pa = tempA.get_precio();
		bebidas tempB=venta.get_bebida()[b-1];
		pa = pa + tempB.get_precio();
		extras tempE=venta.get_extra()[e-1];
		pa = pa + tempE.get_precio();

		pf = pf + pa;
		
		cout << "Desea agregar mas alimentos? \n 1 = Si  2 = No" << endl;
		cin >> opt;
		if (opt == 2){
		cout <<"-------------------------------------------------------------------" <<endl;
		cout <<"-------------------------------------------------------------------" <<endl;

			cout << "\n\nSu total es: " << pf <<"$" << endl;
			break;
		}
		else{
			cout << "\nSu total es: " << pf <<"$" << endl;
		}
		

	}
}
