/******************************************************************************
Find Missing Element
*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int missing_element(vector<int>arr){
    int sum_of_num=0;
    int sum_of_indexes=0;
    int First_element=arr[0];
    int Last_element=arr[arr.size()-1];
    
    for(int i=0; i<arr.size(); i++){
        sum_of_num=sum_of_num+arr[i];
    }
    
    for(int j=First_element; j<=Last_element; j++){
        sum_of_indexes=sum_of_indexes+j;
    }
    
    int missing_Element=(sum_of_indexes - sum_of_num);
    return missing_Element;
}

int main()
{
    vector<int>arr{101,102,103,104,105,106,108,109};
    
    cout<<"The missing element is "<<missing_element(arr)<<endl;

    return 0;
}