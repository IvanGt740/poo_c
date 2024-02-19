#include <iostream>
using namespace std;

class Persona{
    //Atributos de Persona = nombres,direccion,telefono
    protected : string nombres,apellidos,direccion,fecha_nacimiento;
    int telefono;

//Metodos
    Persona() {

    }  
        Persona (string nom,string ape, string dir,int tel, string fecha_n){
            nombres = nom;
            apellidos = ape;
            direccion = dir;
            telefono = tel;
            fecha_nacimiento = fecha_n;    
        } 

        //Metodos CRUD = crear, leer, actualizar, borrar
        void crear();
        void leer();
        void actualizar();
        void borrar();
};

