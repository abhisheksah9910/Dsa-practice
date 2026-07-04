#include<bits/stdc++.h>
using namespace std;

                    //Brute force Left rotate by k place
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"how many places want to rotate\n";
//     int k;
//     cin>>k;
//     k=k%n;
//     vector<int> temp(k);
//     for(int i=0;i<k;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=0;i<n-k;i++){
//         arr[i]=arr[i+k];
//     }
//     int j=0;
//     for(int i=n-k;i<n;i++){
//         arr[i]=temp[j];
//         j++;
//     }
//     cout<<"Rotated array are :\n";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

                //optimal  Left rotate by k place


// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     k=k%n;
//     reverse(arr.begin(),arr.begin()+k);
//     reverse(arr.begin()+k,arr.end());
//     reverse(arr.begin(),arr.end());
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


            //right rotate by k places


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}