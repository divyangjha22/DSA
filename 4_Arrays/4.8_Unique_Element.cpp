/******************************************************************************
One of the most popular question --> Asked many times in Amaon, Microsoft, Flipkart.

Find unique element in an array.
Explanation:
Here we can use XOR function because it will gives the unique element only.
Example: 2^2^3^4^3^5^5=4. Answer is 4 because it is unique.
Truth table of XOR:
0     0       0
0     1       1
1     0       1
1     1       0
*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int unique_element(vector<int>arr){
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    
    vector<int>arr(n);
    
    // Taking input
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    
    cout<<"The unique element is "<<unique_element(arr);

    return 0;
}