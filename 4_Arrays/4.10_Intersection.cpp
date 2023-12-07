/******************************************************************************
Intersection
*******************************************************************************/
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void intersection(vector<int>arr, vector<int>brr, vector<int>ans){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i]==brr[j]){
                // Mask
                brr[j]=INT_MIN; // If this value repeats again in brr then it will not print
                ans.push_back(arr[i]);
            }
        }
    }
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    vector<int>arr{1,2,3,3,4,5};
    vector<int>brr{3,3,4,5,6,7};
    vector<int> ans;
    
    cout<<"The intersection of two arrays are ";
    intersection(arr, brr, ans);

    return 0;
}