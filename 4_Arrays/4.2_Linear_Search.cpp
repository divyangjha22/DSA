//Linear Search in an array
#include <iostream>
using namespace std;

void IO(int arr[], int size){
    
    // Taking Input
    cout<<"Enter 5 elements in the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<endl;
}

bool Linear_Search(int arr[], int size, int n){
    for(int i=0; i<size; i++){
        if(arr[i]==n){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5];
    int size=5;
    IO(arr, size);
    
    int n;
    cout<<"Enter the number you want to find: ";
    cin>>n;
    
    if(Linear_Search(arr, size, n)){
        cout<<"Element found";
    }
    
    else{
        cout<<"Element not found";
    }

    return 0;
}