/******************************************************************************
Triplet Sum --> Asked many times in the interview
*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void triplet_sum(int num, vector<int>arr, vector<int>ans){
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                if(arr[i]+arr[j]+arr[k]==num){
                    cout<<"("<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<")"<<endl;
                
                }
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
    
    cout<<"The triplet sum of "<<num<<" is"<<endl;
    triplet_sum(num, arr, ans);

    return 0;
}