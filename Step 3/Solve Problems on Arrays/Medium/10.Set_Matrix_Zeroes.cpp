#include<bits/stdc++.h>
using namespace std;
            //brute force

// void markrow(vector<vector<int>> &matrix,int r){
//     int col= matrix[0].size();
//     for(int j=0;j<col;j++){
//         if(matrix[r][j]!=0){
//             matrix[r][j]=-1;
//         }
//     }
    
// }
// void markcol(vector<vector<int>> &matrix,int c){
//     int row= matrix.size();
//     for(int j=0;j<row;j++){
//         if(matrix[j][c] != 0){   
//             matrix[j][c]=-1;
//         }
//     }
// }
// int main(){
//     vector<vector<int>> matrix={{1,2,0},{0,8,6},{8,7,3}};
//     int row= matrix.size();
//     int col= matrix[0].size();
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(matrix[i][j]==0){
//                 markrow(matrix,i);
//                 markcol(matrix,j);
//             }
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(matrix[i][j]==-1){
//                 matrix[i][j]=0;
//             }
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


            //better approach

// int main(){
//     vector<vector<int>> matrix={{1,2,0,3},{4,5,7,8},{1,4,7,0},{4,1,5,6}};
//     vector<int> row(matrix.size(),0);
//     vector<int> col(matrix[0].size(),0);
    
//     for(int i=0; i<matrix.size();i++){
//         for(int j=0;j<matrix[0].size();j++){
//             if(matrix[i][j]==0){
//                 row[i]=1;
//                 col[j]=1;
//             }
//         }
//     }
//     for(int i=0;i<matrix.size();i++){
//         for(int j=0;j<matrix[0].size();j++){
//             if(row[i]==1 || col[j] ==1){
//                 matrix[i][j]=0;
//             }
//         }
//     }
//     for(int i=0;i<matrix.size();i++){
//         for(int j=0;j<matrix[0].size();j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }

            //optimal 
            
int main() {
    vector<vector<int>>matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int m=matrix.size();
    int n=matrix[0].size();
    int col0=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0){
                    matrix[0][j]=0;
                }
                else{
                    col0=0;
                }

            }

        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<n;j++){
            matrix[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<m;i++){
            matrix[i][0]=0;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    
    return 0;
}