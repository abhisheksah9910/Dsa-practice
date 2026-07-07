#include<bits/stdc++.h>
using namespace std;
            //brute force

// int main(){
//     vector<int> arr{2,4,5,9,8,7};
//     int target;
//     cin>>target;
//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
            
//             if(arr[i]+arr[j]==target){
//                 cout<<i<<" "<<j;
//                 return 0;
//             }
//         }
//     }
//     cout<<"No pair found";
// }


            //better using map

// int main(){
//     vector<int> arr{2,4,5,9,8,7};
//     map<int,int> mp;
//     int target;
//     cin>>target;
    
//     for(int i=0;i<arr.size();i++){
//         int rem = target-arr[i];
//         if(mp.find(rem)!=mp.end()){        //mp.end() means not found
//             cout << "Yes" << endl;
//             cout << "{"<< mp[rem] << "," << i << "}" << endl;
//             return 0;
//         }
//         mp[arr[i]]=i;       //update index as value 
//     }
//     cout<<"No";
// }



int main(){
    vector<int> arr{2,4,7,8,5,9};
    int target;
    cin>>target;
    sort(arr.begin(),arr.end());
    int left=0;
    int right=arr.size()-1;
    while(left<right){
        if(arr[left]+arr[right]==target){
            cout<<"Yes";
            return 0;
        }
        if(arr[left]+arr[right]>target){
            right--;
        }else if(arr[left]+arr[right]<target){
            left++;
        }
    }
    cout<<"No";
}