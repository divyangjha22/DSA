#include<iostream>
using namespace std;

float arcircle(float r){
    float ar=3.14*r*r;
    return ar;
}

int main(){
    float r;
    cin>>r;

    float area=arcircle(r);
    cout<<"Area of circle is "<<area;
    return 0;
}