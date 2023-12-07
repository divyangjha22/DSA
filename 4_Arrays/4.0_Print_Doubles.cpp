// Take 5 elements as input from the user & print their doubles

#include <iostream>
using namespace std;

void IO(int arr[]){
    
    // Taking Input
    cout<<"Enter 5 elements in the array"<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    // Printing array elements
    cout<<"Doubles of the array elements are : "<<endl;
    for(int i=0; i<5; i++){
        cout<<2 * arr[i]<<" ";
    }
}

int main()
{
    int arr[5];
    
    IO(arr);
    

    return 0;
}