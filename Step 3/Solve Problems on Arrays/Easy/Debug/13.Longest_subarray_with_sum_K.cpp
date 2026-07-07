#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,1,1,1,3,1,4};
    int k;
    cin>>k;
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            if(sum==k){
                maxi=max(maxi,j-i+1);
            }
        }
    }
    cout<<"Longest subarray with sum K is: "<<maxi;
}