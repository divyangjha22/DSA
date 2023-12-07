#include<iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter a number: ";
    cin>> number;

    switch(number){
        case 1: cout<<"Hey there!!"<<endl;
        break;
        case 2: cout<<"What's app"<<endl;
        break;
        case 3: cout<<"How are you"<<endl;
        break;
        case 4: cout<<"Hope you are doing well"<<endl;
        break;
        default: cout<<"Better Luck Next Time"<<endl;
    }

    return 0;
}