#include <iostream>
using namespace std;
int main(){
    cout<<"Ingrese la opcion a ejecutar: \n 1.Primera opcion \n 2.Segunda opcion \n 3.Tercera opcion \n";
    int option = 0;
    cin >> option;
    string nombre = "";
    int edad = 0;
    switch(option){
        case 1: cout<<"Estas en la opcion 1. \n Ingresa tu nombre: ";
                cin >> nombre;
                cout <<"Bienvenido " <<nombre;
        break;
        case 2: cout<<"Estas en la opcion 2. \n Ingresa tu edad: ";
                cin >> edad;
                cout <<"Tienes " <<edad <<"años";
        break;
        case 3: cout<<"Estas en la opcion 3. \n Esta opcion no hace nada";
        break;
        default: cout<<"Opcion no valida";
    }
    return 0;
}