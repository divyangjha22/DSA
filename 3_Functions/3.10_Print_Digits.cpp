#include <iostream>
using namespace std;

void Digit_Sep(int digit){
    while(digit!=0){
        int ans=digit%10;
        cout<<ans<<" ";
        
        digit=digit/10;
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    cout<<"The digits are: ";
    Digit_Sep(n);
    
    return 0;
}