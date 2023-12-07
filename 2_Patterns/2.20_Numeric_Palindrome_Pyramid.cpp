/******************************************************************************
Numeric Palindrome Pyramid
    1
   121
  12321
 1234321
123454321
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    for(int row=0; row<n; row++){
        for(int space=0; space<n-row-1; space++){
            cout<<" ";
        }
        for(int col=0; col<row+1; col++){
            cout<<col+1;
        }
        for(int col=row; col>=1; col--){
            cout<<col;
        }
        cout<<endl;
    }

    return 0;
}


