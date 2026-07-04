#include<bits/stdc++.h>
using namespace std;

            //left rotate
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int temp = arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


            //right rotate

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp = arr[n-1];
    for(int i=0;i<n-1;i++){
        arr[n-i-1]=arr[n-i-2];
    }
    arr[0]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}