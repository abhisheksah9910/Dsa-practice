#include<bits/stdc++.h>
using namespace std;

                    // Brute force            
                    //removing duplicates using set

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     set<int> ans;
//     for(int i=0;i<n;i++){
//         ans.insert(arr[i]);
//     }
//     for(int x : ans){
//         cout<<x<<" ";
//     }
// }

                    //optimal using two pointer

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;

    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    cout<<"Unique Element : \n";
    for(int k=0;k<=i;k++){
        cout<<arr[k]<<" ";
    }

}
