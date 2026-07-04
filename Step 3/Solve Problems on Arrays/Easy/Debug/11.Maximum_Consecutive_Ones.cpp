#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{1,1,0,1,1,1,0,1,};
    int maxi=0;
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
        }else{
            count=0;
        }
        if(count>maxi){
            maxi=count;
        }

    }
    cout<<"Maximum consecutive ones is "<<maxi;
}