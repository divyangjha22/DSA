/******************************************************************************
Fancy Pattern 3
3
44
555
6666
555
44
3
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<row+n-1;
        }
        cout<<endl;
    }
    
    for(int row=n-2; row>=0; row--){
        for(int col=0; col<row+1; col++){
            cout<<row+n-1;
        }
        cout<<endl;
    }

    return 0;
}

