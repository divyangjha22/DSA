/******************************************************************************
Maximum & Minimum element in 2-D array
*******************************************************************************/
#include <iostream>
#include <limits.h>
using namespace std;

// Smallest number
int mini(int arr[3][3], int row, int col){
    int min_el=INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<min_el){
                min_el=arr[i][j];
            }
        }
    }
    return min_el;
}

// Largest Number
int maxi(int arr[3][3], int row, int col){
    int max_el=INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>max_el){
                max_el=arr[i][j];
            }
        }
    }
    return max_el;
}

int main()
{
    int arr[3][3]={22,33,12,45,11,56,44,98,88};
    int row=3;
    int col=3;
    
    // Printing array elements
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"The smallest element in the array is "<<mini(arr, row, col)<<endl;
    cout<<"The largest element in the array is "<<maxi(arr, row, col)<<endl;

    return 0;
}