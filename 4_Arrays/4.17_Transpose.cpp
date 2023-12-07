/******************************************************************************
Transpose of an array --> Rows transform into columns & columns into rows
*******************************************************************************/
#include <iostream>
using namespace std;

void transpose_array(int arr[3][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
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
    
    cout<<"The transpose is"<<endl;
    transpose_array(arr, row, col);

    return 0;
}