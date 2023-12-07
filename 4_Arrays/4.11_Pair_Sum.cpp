/******************************************************************************
Pair Sum --> Asked many times in the interview
*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void pair_sum(int num, vector<int>arr, vector<int>ans){
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==num){
                cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<endl;
                
            }
        }
    }
}

int main()
{
    int num;
    cout<<"Enter a number you want the pair sum: ";
    cin>>num;
    
    vector<int>arr{1,2,3,4,5,6,7,8};
    vector<int>ans;
    
    cout<<"The pair sum of "<<num<<"is"<<endl;
    pair_sum(num, arr, ans);

    return 0;
}