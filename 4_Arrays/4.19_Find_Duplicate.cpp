/******************************************************************************
Find the dupliate number. All number repeating once except one number.
*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

void duplicate_num(vector<int>arr){
    int ans;
    for(int i=0; i<arr.size(); i++){
        int num=arr[i];
        for(int j=i+1; j<arr.size(); j++){
            ans=num^arr[j];
            if(ans==0){
                 cout<<arr[j];
            }
        }
    }
}

// ***************More Optimized*********************
// int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for(int i=0; i<nums.size()-1; i++){
//             if(nums[i]==nums[i+1]){
//                 return nums[i];
//             }
//         }
//     return -1;
//     }

int main()
{
    vector<int>arr{1,2,3,4,3};
    
    cout<<"The duplicate number in the array is ";
    duplicate_num(arr);
    return 0;
}