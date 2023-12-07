#include<iostream>
using namespace std;

// Function Declaration
int getMax(int a, int b, int c){
    
    // Function Definition
    int max;
    if(a>b && a>c){
        max=a;
    }
    else if(b>a && b>c){
        max=b;
    }
    else{
        max=c;
    }
    return max;
}

int main(){
    int a,b,c;
    cout<<"Enter the value of a,b & c"<<endl;
    cin>>a>>b>>c;

    // Function Call
    int max=getMax(a,b,c);
    cout<<"The max of number is "<<max;
    
    return 0;
}
