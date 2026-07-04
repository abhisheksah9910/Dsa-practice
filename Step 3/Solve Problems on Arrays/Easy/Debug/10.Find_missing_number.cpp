#include<bits/stdc++.h>
using namespace std;

            //brute method

// int main(){
//     vector<int> arr{0,1,2,4,5};
//     int k=0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==k){
//             k++;
//         }else{
//             break;
//         }

//     }
    
//     cout<<"Missing Number is "<<k;
// }

            //better using sum

// int main(){
//     vector<int> arr{0,1,2,3,5};
//     int sum=0;
//     for(int x: arr){
//         sum+=x;
//     }
//     int realsum=arr.size()*(arr.size()+1)/2;
//     cout<<"Missing number is "<<realsum-sum;
// }

            //optimal using xor
            
int main(){
    vector<int> arr{0,1,2,4,5};
    int xor1=0;
    for(int i=0;i<arr.size();i++){
        xor1^=arr[i];
    }
    int xor2=0;
    for(int i=0;i<=arr.size();i++){
        xor2^=i;
    }
    cout<<(xor1^xor2);
}