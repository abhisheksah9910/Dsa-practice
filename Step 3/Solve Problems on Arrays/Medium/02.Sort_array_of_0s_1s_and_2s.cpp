#include<bits/stdc++.h>
using namespace std;
// int main(){
//     vector<int> arr{0,1,1,0,2,1,0,2,2};
//     int zero=0;
//     int one=0;
//     int two=0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==0){
//             zero++;
//         }else if(arr[i]==1){
//             one++;
//         }else if(arr[i]==2){
//             two++;
//         }
//     }
//     for(int i=0;i<zero;i++){
//         arr[i]=0;
//     }
//     for(int i=zero;i<zero+one;i++){
//         arr[i]=1;
//     }
//     for(int i=zero+one;i<zero+one+two;i++){
//         arr[i]=2;
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }


            //Dutch National Flag Algorithm

int main(){
    vector<int> arr{0,2,1,0,1,2,0,2};
    int low=0;
    int mid=0;
    int high=arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

