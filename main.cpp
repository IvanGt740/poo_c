#include "Estudiante.cpp"
#include <iostream>
using namespace std;

main(){
	// instancia de un objeto 
	
	string varc,varn,varap,vardir,varfecha_n;
	int vart;
	
	cout<<"Ingrese Carnet: ";
	cin>>varc;
	cout<<"Ingrese nombre: ";
	cin>>varn;
	cout<<"Ingrese apellido: ";
	cin>>varap;
	cout<<"Ingrese Direccion: ";
	cin>>vardir;
	cout<<"Ingrese Fecha de Nacimiento: ";
	cin>>varfecha_n;
	cout<<"Ingrese Telefono";
	cin>>vart;
	cout<<"..........................Mostrar Datos........................"endl;
	Estduiante estudiante = Estudiante(varn,varap,vardir,vart,varfecha_n,varc);
	estudiante.leer();
	
	
}
