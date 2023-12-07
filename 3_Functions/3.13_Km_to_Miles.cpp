#include <iostream>
using namespace std;

float km_to_miles(int n){
    // 1 mile = 1.621371km
    float ans=n/1.609;
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the kilometers: ";
    cin>>n;
    
    cout<<n<<" km are "<<km_to_miles(n)<<" miles";

    return 0;
}