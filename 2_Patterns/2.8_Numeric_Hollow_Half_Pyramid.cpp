/******************************************************************************
Numeric Hollow Half Pyramid
1
12
1 3
1  4
12345
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Entet the number of rows: ";
    cin>>n;
    
    for(int row=0; row<n; row++){
        
        // For first & Last row
        if(row==0 || row==1 || row==n-1){
            for(int col=0; col<row+1; col++){
                cout<<col+1;
            }
        }
        else{
            cout<<1;
            for(int col=0; col<row-1; col++){
                cout<<" ";
            }
            cout<<row+1;
        }
        cout<<endl;
    }

    return 0;
}

