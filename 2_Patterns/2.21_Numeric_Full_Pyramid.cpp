/******************************************************************************
Numeric Full Pyramid
    1
   232
  34543
 4567654
567898765
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
            cout<<row+col+1;
        }
        int start=2*row;
        for(int col=0; col<row; col++){
            cout<<start;
            start--;
        }
        cout<<endl;
    }
    return 0;
}

