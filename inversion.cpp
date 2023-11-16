#include <iostream>
#include <cmath>
using namespace std;
int P=0;
int R=0;
int N=0;
double inv=0;
int main()
{
    cout<<"Ingresa la cantidad de euros invertidos: ";
    cin>>P;
    cout<<"Ingresa la tasa de interes compuesto anual: ";
    cin>>R;
    cout<<"Ingresa el tiempo de la inversion: ";
    cin>>N;
    inv=(P*(1-pow((R/100),N+1)))/(1-(R/100));
    cout<<"La cantidad de dinero ganado en " <<N <<" años es de: " <<inv <<" euros";
}