/******************************************************************************
Print extremes in an array
If the array is [1,2,3,4,5,6,7,8] then the output will be [1,8,2,7,3,6,4,5]
*******************************************************************************/
#include <iostream>
using namespace std;

void extremes(int arr[], int size){
    int i=0, j=size-1;
    while(i<=j){
        
        if(i==j){ // For odd cases if the number of elements are odd
            cout<<arr[i];
        }
        else{
            cout<<arr[i]<<" ";
            cout<<arr[j]<<" ";
        }
        i++;
        j--;
    }
}

int main()
{
    int arr[11]={10,20,30,40,50,60,70,80,90,100,110};
    int size=11;
    
    cout<<"Extremes: ";
    extremes(arr, size);

    return 0;
}