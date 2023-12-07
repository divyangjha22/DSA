#include <iostream>
using namespace std;

void set_bit(int n, int k){
    int mask=1<<k; //Left Shift
    int ans=n|mask;
    cout<< ans;
}

int main()
{
    int k;
    cout<<"Enter the index number where you want to set the bit: ";
    cin>>k;
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    cout<<"Result ";
    set_bit(n, k);

    return 0;
}