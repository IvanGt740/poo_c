//comentarios github
#include "Estudiante.cpp"
#include <iostream>
using namespace std;

main(){
	// instancia de un objeto 
	
	string varc,varn,varap,vardir,varfecha_n;
	int vart;
	
	cout<<"Ingrese Carnet: "<<endl;
	cin>>varc;
	cout<<"Ingrese nombre: "<<endl;
	cin>>varn;
	cout<<"Ingrese apellido: "<<endl;
	cin>>varap;
	cout<<"Ingrese Direccion: "<<endl;
	cin>>vardir;
	cout<<"Ingrese Telefono: "<<endl;
	cin>>vart;
	cout<<"Ingrese Fecha de Nacimiento: "<<endl;
	cin>>varfecha_n;
	
	cout<<"..........................Mostrar Datos........................"<<endl;
	//Instancia de un objeto
	Estudiante estudiante = Estudiante(varn,varap,vardir,vart,varfecha_n,varc);
	estudiante.leer();
	
	return 0;
}
