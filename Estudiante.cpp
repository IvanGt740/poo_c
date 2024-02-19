#include <iostream>
#include "Persona.cpp"

using namespace std;
class Estudiante : Persona{
    //atributo Estudiante = carnet 
    private : string carnet;
    //constructor 
    public : 
    Estudiante(){

    }
    Estudiante(string nom, string ape, string dir, int tel, string fecha_n,string ca)
    : Persona(nom,ape,dir,tel,fecha_n){
        carnet = ca;
    }

    //Meotodo
    void leer (){
        cout<<carnet<<endl;
        cout<<nombres<<endl;
        cout<<apellidos<<endl;
        cout<<direccion<<endl;
        cout<<telefono<<endl;
        cout<<fecha_nacimiento<<endl;
    }

};

