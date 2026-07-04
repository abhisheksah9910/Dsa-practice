#include<bits/stdc++.h>
using namespace std;
            //brute force
            
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> temp;
//     for(int i=0;i<n;i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]) ;
//         }
//     }
//     while(temp.size()<n){
//         temp.push_back(0);
//     }
//     for(int i=0;i<n;i++){
//         arr[i] = temp[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }

            //optimal using Two pointer

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k=0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[k],arr[j]);
            k++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}