#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float celcius = 0;
float fahrenheit = 0;
int main()
{
    cout<<"Introduce los grados en celcius: ";
    cin>> celcius;
    fahrenheit = ((9*celcius)/5)+32;
    cout<< setprecision(2) <<celcius <<" grados celcius equivales a " <<fahrenheit << " grados fahrenheit.";
    return 0;
}