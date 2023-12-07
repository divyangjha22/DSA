/******************************************************************************

Hollow Half Pyramid
*
* *
*   *
*     *
* * * * *

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int row=0; row<n; row++){
        if(row==0 || row==n-1){
            for(int col=0; col<row+1; col++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int space=0; space<row-1; space++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
