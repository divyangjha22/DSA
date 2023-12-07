#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int ans=0;
    while(n!=0){
        if(n & 1){
            ans++; // Find one set bit so incrementing
        }
        n=n >> 1; // Right shift
    }
    
    cout<<"Number of set bits are "<<ans;

    return 0;
}