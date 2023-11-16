#include <iostream>
#include <cmath>
using namespace std;
double IMC=0;
int w=0;
int h=0;
int main()
{
    cout<<"Introduce tu peso en kilogramos: ";
    cin>>w;
    cout<<"Introduce tu altura en centimetros: ";
    cin>>h;
    IMC=w/pow(h,2);
    cout<<"Tu IMC es de: " <<IMC;
    return 0;
}