#include <iostream>
#include <cmath>
using namespace std;
int edad=0;
int mercurio=0;
int venus=0;
int jupiter=0;
float saturno=0;
int main(){
    cout<<"Introduce tu edad en la Tierra: ";
    cin>> edad;
    mercurio = (edad*365)/88;
    venus =(edad*365)/225;
    jupiter = (edad*365)/4380;
    saturno = (edad*365)/10767;
    cout << "Tu edad en la Tierra es de: " << edad << " años\n";
    cout << "Tu edad en mercurio es de: " << mercurio << " años\n";
    cout << "Tu edad en venus es de: " << venus << " años\n";
    cout << "Tu edad en jupiter es de: " << jupiter << " años\n";
    cout << "Tu edad en saturno es de: " << saturno << " años\n";
    return 0;
}