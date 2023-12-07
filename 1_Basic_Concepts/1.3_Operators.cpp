#include<iostream>
using namespace std;

int main(){
    int a=5;
    int b=3;

    // Arithematic operators--> +,-,*,%,/
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a%b<<endl;
    cout<<a/b<<endl;

    // Relational Operators--> <,>,>=,<=,!=,=,==
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a==b)<<endl;

    // Logical Operator--> &&,||,!
    cout<<(a<5 && b>=3)<<endl;
    cout<<(a<5 || b>=3)<<endl;
    cout<<!(a<5)<<endl;

    return 0;
}