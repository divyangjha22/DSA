/******************************************************************************

Hollow Inverted Half Pyramid
******
*   * 
*  *
* *
**
* 

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    for(int row=0; row<n; row++){
        
        // For first & last row
        if(row==0 || row==n-1){
            for(int col=0; col<n-row; col++){
                cout<<"* ";
            }
        }
        
        // For middle rows
        else{
            cout<<"* ";
            for(int space=0; space<n-row-2; space++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
        
    }

    return 0;
}
