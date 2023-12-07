/******************************************************************************
Count number of 0's & 1's in an array
*******************************************************************************/
#include <iostream>
using namespace std;

void count(int arr[], int size){
    int zero=0, one=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }
    cout<<"Number of zero's in this array is "<<zero<<endl;
    cout<<"Number of one's in this array is "<<one<<endl;
}

int main()
{
    int arr[10]={0,0,1,1,0,1,0,1,1,0};
    int size=10;
    
    count(arr, size);

    return 0;
}