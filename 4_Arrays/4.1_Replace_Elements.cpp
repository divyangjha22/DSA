// Print all the elements of an array as 1 or -1.

#include <iostream>
using namespace std;

void replace(int arr[5]){
	for(int i=0; i<5; i++){
	   arr[i]=1;
	   cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[5]={1,2,3,4,5};
	replace(arr);

	return 0;
}