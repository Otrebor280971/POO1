#include <iostream>
#include "calificaciones.h"
using namespace std;

int main(){
    Estudiante estu;
    string nom;
    string matr;
    double prom;
    double calif;
    char opcion;

    do {
        cout<<"a) Agregar estudiantes   b) Mostrar calificaciones   c) Clasificacion  d) Salir\n";
        cin>>opcion;
        switch (opcion){
            case 'a':{
                cout<<"Agregar estudiantes\n";
                estu.agregar();
                break;
            }
            case 'b':{
                cout<<"Mostrar Promedio\n";
                estu.consultar();
                break;
            }
            case 'c':{
                cout<<"Clasificacion: ";
                estu.determinar();
                break;
            }
        }
    } while (opcion != 'd');
    return 0;
}