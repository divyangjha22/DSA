// Reverse an array

#include <iostream>
using namespace std;

void reverse(int arr[], int size){
    for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    
    cout<<"Reverse: ";
    reverse(arr, size);

    return 0;
}