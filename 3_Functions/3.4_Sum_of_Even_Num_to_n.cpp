#include<iostream>
using namespace std;

int evenNumSum(int n){
    int sum=0;
    for(int i=2; i<=n; i=i+2){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    int result=evenNumSum(n);
    cout<<"The sum of even number upto N is "<<result;

    return 0;
}
