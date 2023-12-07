/******************************************************************************
Minimum number in an array
*******************************************************************************/
#include <iostream>
#include <limits.h>
using namespace std;

int min_num(int arr[], int size){
    int min=INT_MAX; // Largest integer possible
    for(int i=0; i<size; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[10]={100,10,55,90,85,99,23,3,9,55};
    int size=10;
    
    cout<<"The smallest number in this array is "<<min_num(arr, size)<<endl;
    
    return 0;
}