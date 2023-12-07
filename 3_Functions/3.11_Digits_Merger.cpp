#include <iostream>
using namespace std;


int main()
{
    int digits[]={8,2,3,7};
    int num=0;
    
    for(int i=0; i<4; i++){
        num=num*10+digits[i];
    }
    
    cout<<num;
    

    return 0;
}