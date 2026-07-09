#include<bits/stdc++.h>
using namespace std;
// int main(){
//     vector<int> arr{1,9,5,3,0,2};
//     for(int i=0;i<arr.size();i++){
//         bool leader = true;
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[j]>arr[i]){
//                 leader=false;
//                 break;
//             }
//         }
//         if(leader==true){
//             cout<<arr[i]<<" ";
//         }
//     }
// }


int main(){
    vector<int> arr{1,9,5,3,0,2};
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
            ans.push_back(maxi);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int x: ans){
        cout<<x<<" ";
    }
}