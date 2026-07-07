#include<bits/stdc++.h>
using namespace std;

            //Brute force

// int main() {
//     vector<int> arr{1,1,2,3,3,4,4,7,7,9,9};
//     int n = arr.size();

//     for(int i = 0; i < n; i++) {
//         int num = arr[i];
//         int count = 0;

//         for(int j = 0; j < n; j++) {
//             if(arr[j] == num) {
//                 count++;
//             }
//         }
//         if(count == 1) {
//             cout << "Single number is " << num;
//             return 0;
//         }
//     }

//     return 0;
// }
            //using map

// int main(){
//     vector<int> arr{1,1,2,3,3,4,4,5,5,6,6};
//     map<int,int> mp;
//     for(int i=0;i<arr.size();i++){
//         mp[arr[i]]++;
//     }
//     for(auto x : mp){
//         if(x.second==1){
//             cout<<"Number that appers once is: "<<x.first;
//         }
//     }
// }


            //optimal using xor
            
int main(){
    vector<int> arr{1,1,2,3,3,4,4,5,5,6,6};
    int xorr=0;
    for(int i=0; i<arr.size();i++){
        xorr^=arr[i];
    }
    cout<<"Number that appers once is: "<<xorr;
}