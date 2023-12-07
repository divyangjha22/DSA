/******************************************************************************
Move all the negative numbers to the left side of the array.(Order does'nt matter)

--> There are two ways in which we can solve this problem:
    1.) Sort the array
    2.) Dutch National Flag algorithm --> Two pointer approach
*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

void sort_arr(vector<int>arr){
    int temp;
    int start=0;
    int end=arr.size()-1;
    
    while(start<end){
        if(arr[start]<0){
            start++;
        }
        else if(arr[end]>0){
            end--;
        }
        else{
            // Swapping
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            
            // swap(arr[start], arr[end]);
        }
    }
    
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int>arr{1,2,-1,-9,2,-3,2,-1,-9};
    
    cout<<"The sorted array is ";
    sort_arr(arr);

    return 0;
}