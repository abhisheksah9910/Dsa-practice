#include<bits/stdc++.h>
using namespace std;

//if array contains an equal number of positive and negative elements

            //brute froce

// int main(){
//     vector<int> arr{2,-1,-6,4,-7,3};
//     if(arr.size()%2 != 0){
//         cout<<"Rearranging of array element is not possible";
//         return 0;
//     }

//     int n=arr.size()/2;
//     vector<int> positive(n);
//     vector<int> negative(n);
//     int pos=0;
//     int neg=0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]>=0){
//             positive[pos]=arr[i];
//             pos++;
//         }else{
//             negative[neg]=arr[i];
//             neg++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         arr[2*i]=positive[i];
//         arr[2*i+1]=negative[i];
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }

            //optimal

int main(){
    vector<int> arr{2,-1,-6,4,-7,3};
    vector<int> ans(arr.size());
    int pos=0;
    int neg=1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=0){
            ans[pos]=arr[i];
            pos+=2;
        }else{
            ans[neg]=arr[i];
            neg+=2;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
