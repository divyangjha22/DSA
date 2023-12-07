/******************************************************************************
Row-Sum & Col-Sum
*******************************************************************************/
#include <iostream>
using namespace std;

// Row-Sum
void row_sum(int arr[3][3], int row, int col){
    for(int i=0; i<row; i++){
        int row_sum=0;
        for(int j=0; j<col; j++){
            row_sum=row_sum+arr[i][j];
        }
        cout<<row_sum;
        cout<<endl;
    }
}

// Col-Sum
void col_sum(int arr[3][3], int row, int col){
    for(int i=0; i<row; i++){
        int col_sum=0;
        for(int j=0; j<col; j++){
            col_sum=col_sum+arr[j][i];
        }
        cout<<col_sum;
        cout<<endl;
    }
}

int main()
{
    int arr[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row=3;
    int col=3;
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" "; // This will print row-wise
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"The row-sum:"<<endl;
    row_sum(arr, row, col);
    cout<<endl;
    
    cout<<"The col-sum:"<<endl;;
    col_sum(arr, row, col);

    return 0;
}