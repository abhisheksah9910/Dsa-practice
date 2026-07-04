#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number which you want to search:\n";
    int s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            cout<<"Number found at index "<<i;
            return 0;
        }
    }
    cout<<"Number is not found";
}