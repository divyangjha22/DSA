/******************************************************************************

Fancy pattern 1
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    // Rows
    for(int row=0; row<n; row++){
        
        // Stars before numbers
        for(int star=0; star<n-row+3; star++){
            cout<<"*";
        }
        
        // Numbers & Stars
        for(int col=0; col<row+1; col++){
            cout<<row+1;
            if(col!=row){
                cout<<"*";
            }
        }
        
        // Stars after numbers
        for(int star=0; star<n-row+3; star++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
