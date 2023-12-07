#include<iostream>
using namespace std;

bool checkEO(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

void checkNum(int n){
    if(n%2==0){
        cout<<"Entered number is Even"<<endl;
    }
    else{
        cout<<"Entered number is Odd"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number to find out whether it is even or odd: ";
    cin>>n;
    
    checkNum(n);

    // bool isEO=checkEO(n);

    // if(isEO){
    //     cout<<n<<" is even"<<endl;
    // }
    // else{
    //     cout<<n<<" is odd"<<endl;
    // }
    
    return 0;
}
