/******************************************************************************
Sort 0's & 1's in an array --> Very famous question asked in interview many times
*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void sort_array(vector<int>arr, vector<int>ans){
    int zero=0, one=0;
    
    // Counting number of 0 & 1
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }
    
    // Inserting 0 in vetor ans
    for(int i=0; i<zero; i++){
        ans.push_back(0);
    }
    
    // Inserting 1 in vetor ans
    for(int i=0; i<one; i++){
        ans.push_back(1);
    }
    
    // Printing the sorted array
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    vector<int>arr{0,0,1,1,1,0,1,0,1,0,0,1,1,1,0,0,1,0,1,0,0,1,1};
    vector<int>ans;
    
    cout<<"The sorted array with respect to 0's & 1's : "<<endl;
    sort_array(arr, ans);

    return 0;
}