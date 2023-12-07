#include <iostream>
using namespace std;

int celcius_to_kelvin(double n){
    double kelvin = n + 273.15;
    
    return kelvin;
}

int main()
{
    double n;
    cout<<"Enter the temperature in celcius: ";
    cin>>n;
    
    cout<<celcius_to_kelvin(n)<<" kelvin";

    return 0;
}