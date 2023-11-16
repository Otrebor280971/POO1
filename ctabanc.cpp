#include <iostream>
using namespace std;
class CtaBanc {
private: 
    string nombre;
    double saldo;

public:
    void setNombre(string n){
        nombre = n;
    }
    string getNombre(){
        return nombre;
    }
    void setSaldo(double s){
        saldo = s;
    }
    double getSaldo(){
        return saldo;
    }
    void Deposito(double d){
        saldo +=d;
        cout <<"Tu nuevo saldo es de $"<<saldo <<endl;
    }
    void Retiro(double retiro){
        saldo-=retiro;
        cout <<"Tu nuevo saldo es de $"<<saldo <<endl;
    }

};
int main(){
    CtaBanc banc;
    double saldo;
    string nombre;
    double deposito;
    double retiro;

    cout<<"Ingresa tu nombre: \n";
    cin>>nombre;
    banc.setNombre(nombre);
    cout <<"Ingresa el saldo: \n";
    cin >> saldo;
    banc.setSaldo(saldo);
    cout <<"Ingresa la cantidad a depositar: \n";
    cin>>deposito;
    banc.Deposito(deposito);
    cout <<"Ingresa la cantidad a retirar: \n";
    cin>>retiro;
    banc.Retiro(retiro);
};