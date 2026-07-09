#include <bits/stdc++.h>
using namespace std;
            //Better approach

// int main(){
//     vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int r=matrix.size();
//     int c=matrix[0].size();
//     vector<vector<int>> newarr(r,vector<int>(c));
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             newarr[j][r-i-1]=matrix[i][j];
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<newarr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


            //Optimal by trnspose and reverse
            
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int r = matrix.size();
    int c = matrix[0].size();
    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0;i<r;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}