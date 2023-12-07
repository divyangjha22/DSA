/******************************************************************************
Given an array arr[] of size n, find the first repeating element.
The element should occur more than once and the index of its first
occurrence should be the smallest.
*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Method 1 --> Time omplexity is O(n^2)
int repeating_el(int arr[], int size){
    for(int i=0; i<size; i++){
        int num=arr[i];
        for(int j=i+1; i<size; i++){
            if(arr[i]==arr[j]){
                return i+1;
            }
        }
    }
    return -1;
}

// Method 2 --> Time Complexity is O(n)
/* I'll be using unorder_map from STL to store all the elements of the array & increment each
   then print the element which is incremented by 2.
*/
int Repeating_el(int arr[], int size){
    unordered_map<int, int>hash;
    for(int i=0; i<size; i++){
        hash[arr[i]]++;
    }
    for(int i=0; i<size; i++){
        if(hash[arr[i]]>1){
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1, 5, 3, 4, 3, 5, 6};
    int size=sizeof(arr)/sizeof(int);
    
    cout<<"The first repeating element is "<<repeating_el(arr, size)<< " & time complexity is O(n^2)"<<endl;
    cout<<"The first repeating element is "<<Repeating_el(arr, size)<< " & time complexity is O(n)"<<endl;

    return 0;
}