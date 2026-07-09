#include<bits/stdc++.h>
using namespace std;
// bool linearsearch(int n,vector<int> arr){
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==n){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     vector<int> arr{1,100,3,102,5,101,4};
//     int maxlen=0;
//     for(int i=0;i<arr.size();i++){
//         int length=1;
//         int x = arr[i];
//         while(linearsearch(x+1,arr)){
//             x++;
//             length++;
//         }

//         maxlen=max(maxlen,length);
//     }
//     cout<<maxlen;
// }


// int main(){
//     vector<int> arr{1,100,3,102,5,101,4,1,3,100,101,5};
//     sort(arr.begin(),arr.end());
//     int length=1;
//     int maxlength=INT_MIN;
//     for(int i=1;i<arr.size();i++){
//         if(arr[i]==arr[i-1]){
//             continue;
//         }else if(arr[i]-1==arr[i-1]){
//             length++;
//         }else{
//             length=1;
//         }
//         maxlength=max(maxlength,length);
//     }
//     cout<<maxlength;
// }


int main(){
    vector<int> arr{1,100,3,102,5,101,4,1,3,100,101,5};
    int n=arr.size();
    if(n==0){
        cout<<"Empty array";
        return 0;
    }
    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    } 
    for(auto it: st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1) != st.end()){
                x++;
                cnt++;
            }
            longest= max(longest,cnt);

        }
    }
    cout<<longest;

}