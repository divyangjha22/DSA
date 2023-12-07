/******************************************************************************
Linear Search in 2-D array
*******************************************************************************/
#include <iostream>
using namespace std;

bool ispresent(int arr[3][3], int row, int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row=3;
    int col=3;
    
    // Printing the elements
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    int key;
    cout<<"Enter the number you want to search: ";
    cin>>key;
    cout<<endl;
    
    if(ispresent(arr, row, col, key)){
        cout<<"Element Found";
    }
    else{
        cout<<"Element not Found";
    }
    
    return 0;
}