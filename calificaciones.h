#include <iostream>
#include <cmath>
using namespace std;

class Estudiante {
    private:
        string nombre;
        string matricula;
        double promedio;
        double calificacion;
    public:
        Estudiante();
        Estudiante(string nom, string matr, double prom);

        string getNombre();
        string getMatricula();
        double getCalif();

        void setNombre(string nom);
        void setMatricula(string matr);
        void setCalif(double prom);

        void agregar();
        void consultar();
        void determinar();

};

Estudiante::Estudiante(){
    nombre = " ";
    matricula = " ";
    promedio = 0;
}
Estudiante::Estudiante(string nom, string matr, double prom){
    nombre = nom;
    matricula = matr;
    promedio = prom;
}

void Estudiante::setNombre(string nom) {
    nombre = nom;
}
string Estudiante::getNombre(){
    return nombre;
}

void Estudiante::setMatricula(string matr){
    matricula = matr;
}
string Estudiante::getMatricula(){
    return matricula;
}

void Estudiante::setCalif(double prom){
    promedio = calificacion/3;
}
double Estudiante::getCalif(){
    return promedio;
}

void Estudiante::agregar(){
    cout<<"Nombre del estudiante: ";
    cin>>nombre;
    cout<<"Matricula: ";
    cin>>matricula;
    for(int i=0; i<3; i++){
    cout<<"Calificaciones: ";
    cin>>calificacion;
    promedio+=calificacion;
    }
    cout<<"\n";
}

void Estudiante::consultar(){
    cout<<"El promedio de " <<nombre <<" es : " <<(promedio/3);
    cout<<"\n";
}

void Estudiante::determinar(){
    if (promedio>=95){
        cout<<"A+";
    }
    else if(promedio>=90 && promedio<95){
        cout<<"A-";
    }
    else if (promedio>=80 && promedio<90){
        cout<<"B";
    }
    else if (promedio>=70 && promedio<80){
        cout<<"C";
    }
    else {
        cout<<"D";
    }
    cout<<"\n";
}