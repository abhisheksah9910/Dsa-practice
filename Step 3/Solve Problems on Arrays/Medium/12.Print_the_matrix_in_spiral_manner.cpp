#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int r = matrix.size();
    int c = matrix[0].size();
    int top=0, right=c-1;
    int left=0, bottom=r-1;
    vector<int> ans;
    while(top<=bottom && left <= right){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    for(int x : ans){
    cout << x << " ";
    }
}