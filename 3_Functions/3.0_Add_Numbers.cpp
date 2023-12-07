#include<iostream>
using namespace std;

int getSum(int a, int b){
    int result=a+b;
    return result;
}

int main(){
    int a,b;
    cout<<"Enter the value of a & b: ";
    cin>>a>>b;

    // int sum = getSum(a, b);
    // cout<<"The sum of your value is "<< sum;
    
    cout<< "The sum of your value is " << getSum(a,b);
    return 0;
}
