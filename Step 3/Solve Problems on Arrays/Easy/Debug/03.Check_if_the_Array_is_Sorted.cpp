#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            cout<<"Array is not sorted";
            return 0;
        }
    }
    cout<<"Array is sorted";
}