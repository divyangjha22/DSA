/******************************************************************************
Spiral print a Matrix
Example : 1 2 3
          4 5 6
          7 8 9
Output : 1,2,3,6,9,8,7,4,5
*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size(); // row
        int n=matrix[0].size(); // col
        int total_elements=m*n;

        int sr=0; // Starting Row
        int ec=n-1; // Ending Col
        int er=m-1; // Ending Row
        int sc=0; // Starting Col
        
        int count=0;
        while(count<total_elements){
            for(int i=sc; i<=ec && count<total_elements; i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;

            for(int i=sr; i<=er && count<total_elements; i++){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;

            for(int i=ec; i>=sc && count<total_elements; i--){
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;

            for(int i=er; i>=sr && count<total_elements; i--){
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
        }
        return ans;
    }

int main() {
    vector<vector<int>>matrix{{1,2,3}, {4,5,6}, {7,8,9}};
    
    cout<<"The spiral order matrix is "<<endl;
    vector<int>res=spiralOrder(matrix);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    
  return 0;
}