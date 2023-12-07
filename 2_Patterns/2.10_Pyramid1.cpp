/******************************************************************************

Full Pyramid(1,3,5,7,9)
    *
   ***
  *****
 *******
*********

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
        for(int col=0; col<(2*row)+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
