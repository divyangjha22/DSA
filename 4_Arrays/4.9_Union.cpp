/******************************************************************************
Union of two arrays (No duplicates)
*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5]={1,3,5,7,9};
    int size_of_arr=5;
    
    int brr[5]={2,4,6,8,10};
    int size_of_brr=5;
    
    vector<int>ans;
    
    for(int i=0; i<size_of_arr; i++){
        ans.push_back(arr[i]);
    }
    
    for(int i=0; i<size_of_brr; i++){
        ans.push_back(brr[i]);
    }
    
    cout<<"The union of two arrays are: ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}