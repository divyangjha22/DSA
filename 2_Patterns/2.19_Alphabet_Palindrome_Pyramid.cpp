/******************************************************************************
Alphabet Palindrome Pyramid
A
A B A
A B C B A
A B C D C B A
A B C D E D C B A
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
            int ans=col+1;
            char ch=ans+'A'-1; // Mapping numbers with the alphabets
            cout<<ch<<" ";
        }
        
        // Reverse counting to make a palindrome
        for(int col=row; col>=1; col--){
            int ans=col;
            char ch=ans+'A'-1; // Mapping numbers with the alphabets
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}

