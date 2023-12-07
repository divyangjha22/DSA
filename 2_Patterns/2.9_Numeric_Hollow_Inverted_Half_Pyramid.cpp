/******************************************************************************
Numeric Hollow Inverted Half Pyramid
12345
1  4
1 3
12
1
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    for(int row=0; row<n; row++){
        if(row==0 || row==n-1 || row==n-2){
            for(int col=0; col<n-row; col++){
                cout<<col+1;
            }
        }
        
        else{
            cout<<1;
            for(int space=0; space<n-row-2; space++){
                cout<<" ";
            }
            cout<<n-row;
        }
        cout<<endl;
    }

    return 0;
}
