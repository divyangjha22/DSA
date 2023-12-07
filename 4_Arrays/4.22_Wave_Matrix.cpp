/******************************************************************************
Wave Print a matrix
Example : 1 2 3
          4 5 6
          7 8 9
Output : 1,4,7,8,5,2,3,6,9
*******************************************************************************/
#include <iostream>
using namespace std;

void waveprint(int arr[3][3], int row, int col){
    cout<<"The matrix is : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"The wave print : "<<endl;
    for(int i=0; i<row; i++){
        if(i%2==0){
            for(int j=0; j<row; j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=row-1; j>=0; j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row=3;
    int col=3;
    
    waveprint(arr, row, col);

    return 0;
}