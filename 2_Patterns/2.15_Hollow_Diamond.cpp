/******************************************************************************
Hollow Diamond
    *
   * * 
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    // Hollow Pyramid
    for(int row=0; row<n; row++){
        for(int space=0; space<n-row-1; space++){
            cout<<" ";
        }
        if(row==0 || row==1){
            for(int col=0; col<row+1; col++){
                cout<<"* ";
            }
        }
        
        else{
            cout<<"* ";
            for(int space=0; space<row-1; space++){
                cout<<"  ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
    // Inverted Hollow Pyramid
    for(int row=0; row<n; row++){
        for(int space=0; space<row; space++){
            cout<<" ";
        }
        if(row==n-1 || row==n-2){
            for(int col=0; col<n-row; col++){
                cout<<"* ";
            }
        }
        
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

