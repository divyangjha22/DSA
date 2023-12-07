/******************************************************************************
Numeric Hollow Pyramid
    1
   1 2
  1   3
 1     4
1 2 3 4 5
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of row: ";
    cin>>n;
    
    for(int row=0; row<n; row++){
        for(int space=0; space<n-row-1; space++){
            cout<<" ";
        }
        if(row==0 || row==n-1){
            for(int col=0; col<row+1; col++){
                cout<<col+1<<" ";
            }
        }
        
        else{
            cout<<1;
            for(int space=0; space<(2*row)-1; space++){
                cout<<" ";
            }
            cout<<row+1;
        }
        cout<<endl;
    }

    return 0;
}

