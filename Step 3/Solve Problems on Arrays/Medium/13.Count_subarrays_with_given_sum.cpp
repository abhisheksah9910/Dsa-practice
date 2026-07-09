#include<bits/stdc++.h>
using namespace std;
            //brute force
// int main(){
//     vector<int> arr{1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
//     int n= arr.size();
//     int k=3;
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum==k){
//                 cnt++;
//             }
//         }
//     }
//     cout<<cnt;
// }

            //optimal
            
int main(){
    vector<int> arr{1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    map<int,int> mpp;
    mpp[0]=1;
    int n= arr.size();
    int k=3;
    int count=0;
    int prefixsum=0;
    for(int i=0;i<n;i++){
        prefixsum+=arr[i];
        int remove=prefixsum-k;
        count+=mpp[remove];
        mpp[prefixsum]+=1;
    }
    cout<<count;
}