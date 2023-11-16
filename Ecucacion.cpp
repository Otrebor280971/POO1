#include <iostream>
#include <cmath>
using namespace std;
int A=0;
int B=0;
int C=0;
float Xp=0;
float Xn=0;
int main()
{
    cout<<"Introduce el valor de A: ";
    cin>>A;
    cout<<"Introduce el valor de B: ";
    cin>>B;
    cout<<"Introduce el valor de C: ";
    cin>>C;
    Xp= ((B*-1) + (sqrt(pow(B,2)+(4*A*C))))/2*A;
    Xn= ((B*-1) - (sqrt(pow(B,2)+(4*A*C))))/2*A;
    cout<<"El valor positivo de X es: " <<Xp <<"\n";
    cout<<"El valor negativo de X es: " <<Xn;
    return 0; 
}