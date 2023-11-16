#include <iostream>

using namespace std;

int num1 = 0, num2= 0, suma=0;

int main() {
    cout <<"introduce el primer numero entero: ";
    std::cin >> num1;
    cout <<"introduce el segundo numero entero: ";
    std::cin >> num2;

    suma = num1 + num2;
    cout<<suma;
    
    return 0;
}
