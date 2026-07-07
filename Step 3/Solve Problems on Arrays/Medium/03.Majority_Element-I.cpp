#include<bits/stdc++.h>
using namespace std;

            //Brute force

// int main(){
//     vector<int> arr{2,2,1,0,2,2,9};
//     int n=arr.size()/2;
//     for(int i=0;i<arr.size();i++){
//         int count=0;
//         for(int j=0;j<arr.size();j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count>=n){
//             cout<<"The majority element is:"<<arr[i];
//             return 0;
//         }
//     }
// }

            //Better using hasing

// int main(){
//     vector<int> arr{2,2,1,0,5,2,2};
//     int n=arr.size()/2;
//     map<int,int> mp;
//     for(int i=0;i<arr.size();i++){
//         mp[arr[i]]++;
//     }
//     for(auto x: mp){
//         if(x.second>2){
//             cout<<"Majority Element is "<<x.first;
//             return 0;
//         }
//     }
// }

            //Moore's Voting Algo

int main(){
    vector<int> arr{2,1,2,2,5,8,5,7,5,4,5,5,5,5};
    int element=arr[0];
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(count==0){
            count++;
            element=arr[i];
        }else if(arr[i]==element){
            count++;
        }else{
            count--;
        }
    }
    int cnt=0;
    for(int x: arr){
        if(x==element){
            cnt++;
        }
    }
    if(cnt>arr.size()/2){
        cout<<"Majority element is: "<<element;
    }else{
        cout<<"There is no Majority element";
    }
}