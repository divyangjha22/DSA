/******************************************************************************
Maximum number in an array
*******************************************************************************/
#include <iostream>
#include <limits.h>
using namespace std;

int max_num(int arr[], int size){
    int max=INT_MIN; // Smallest integer possible
    for(int i=0; i<size; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[10]={1,10,55,90,85,99,23,3,9,55};
    int size=10;
    
    cout<<"The largest number in this array is "<<max_num(arr, size)<<endl;
    
    return 0;
}