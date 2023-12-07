#include<iostream>
using namespace std;

bool prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool ans=prime(n);
    if(ans){
        cout<<"The number is prime";
    }
    else{
        cout<<"Not prime";
    }

    return 0;
}
