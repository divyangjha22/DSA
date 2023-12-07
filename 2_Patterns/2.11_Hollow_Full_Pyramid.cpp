/******************************************************************************

Hollow Full Pyramid
    *
   * *
  *   *
 *     *
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
        // Spaces before stars
        for(int space=0; space<n-row-1; space++){
            cout<<" ";
        }
        
        // For first & last row
        if(row==0 || row==n-1){
            for(int col=0; col<(2*row)+1; col++){
                cout<<"*";
            }
        }
        
        // For middle rows
        else{
            cout<<"*";
            for(int col=0; col<((2*row)+1)-2; col++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
