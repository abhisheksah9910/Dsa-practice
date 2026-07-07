            //Maximum subarray sum

#include<bits/stdc++.h>
using namespace std;
// int main(){
//     vector<int> arr{1,-2,-3,4,3,1,-2,3,5};
//     int maxi=INT16_MIN;
//     for(int i=0;i<arr.size();i++){
//         int sum=0;
//         for(int j=0;j<arr.size();j++){
//             sum+=arr[j];
//             if(sum>maxi){
//                 maxi=sum;
//             }
//         }
//     }
//     cout<<maxi;
// }

                //Kadane's Algorithm

int main(){
    vector<int> arr{-1,4,-2,-1,5,2,-2,-1};
    int maxi = INT_MIN;
    int sum=0;
    int start;
    int end;
    for(int i=0;i<arr.size();i++){
        if(sum==0){
            start=i;
        }
        sum += arr[i];
        if(sum>maxi){
            maxi=sum;
            end=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"Maximum subarray sum is: "<<maxi<<endl;
    cout<<"The subarray start at "<<start<<" index and end at "<<end<<" index";

}