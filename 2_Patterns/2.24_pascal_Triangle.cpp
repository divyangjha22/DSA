/******************************************************************************
pascal's Triangle
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    // Formula for Pascla's Triangle -> c=c*(row-col)/col;
    for(int row=1; row<=n; row=row+1){
        int c=1;
        for(int col=1; col<=row; col=col+1){
            cout<<c<<" ";
            c=c*(row-col)/col;
        }
        cout<<endl;
    }
}
