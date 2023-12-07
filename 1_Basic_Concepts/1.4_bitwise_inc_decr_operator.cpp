/******************************************************************************
BitWise Operators
AND means multiplication
AND -  a    b    output
       0    0       0       0*0=0
       0    1       0       0*1=0
       1    0       0       1*0=0
       1    1       1       1*1=1

OR means addition
OR -   a    b    output
       0    0       0       0+0=0 
       0    1       1       0+1=1
       1    0       1       1+0=1
       1    1       1       1+1=1

XOR -  a    b    output
       0    0       0
       0    1       1
       1    0       1
       1    1       0

NOT -  a    output
       0      1       
       1      0 
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    bool a=true;
    bool b=false;
    bool c=true;
    bool d=false;

    // AND
    cout<<"AND"<<endl;
    cout<<(a&b)<<endl;
    cout<<(a&c)<<endl;
    cout<<(b&d)<<endl;
    cout<<endl;

    // OR
    cout<<"OR"<<endl;
    cout<<(a|b)<<endl;
    cout<<(a|c)<<endl;
    cout<<(b|d)<<endl;
    cout<<endl;

    // NOT
    cout<<"NOT"<<endl;
    cout<<(~a)<<endl;
    cout<<(~b)<<endl;
    cout<<endl;

    //XOR
    cout<<"XOR"<<endl;
    cout<<(a^b)<<endl;
    cout<<(a^c)<<endl;
    cout<<(b^d)<<endl;
    
    // Left Shift operator
    // When a number is left shift then it is multiplied by 2.
    int aa=5;
    int cc=aa<<2;
    cout<<cc<<endl;
    
    // Right Shift operator
    // When a number is right shift then it is divided by 2.
    int bb=20;
    int dd=bb>>2;
    cout<<dd<<endl;
    cout<<endl;
    
    // Increment operator
    
    // pre Increment --> 1st increment then print
    int preincr=5;
    cout<<++preincr<<endl;
    
    // post Increment -->1st print then increment
    int postincr=5;
    cout<<postincr++<<endl;
    cout<<postincr;
    cout<<endl;
    
    // Decrement operator
    
    // pre Decrement --> 1st decrement then print
    int predec=5;
    cout<<--predec<<endl;
    
    // post Decrement -->1st print then decrement
    int postdec=5;
    cout<<postdec--<<endl;
    cout<<postdec;

    return 0;
}

