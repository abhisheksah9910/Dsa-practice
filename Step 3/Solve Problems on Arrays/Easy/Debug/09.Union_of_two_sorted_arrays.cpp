#include<bits/stdc++.h>
using namespace std;

// int main(){
//     cout<<"Enter the size of 1st array\n";
//     int n;
//     cin>>n;
//     cout<<"Enter element of 1st array\n";
//     vector<int> arr1(n);
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cout<<"Enter the size of 2nd array\n";
//     int m;
//     cin>>m;
//     cout<<"Enter Element of 2nd array\n";
//     vector<int> arr2(m);
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }
//     set<int> s;
//     for(int i=0;i<n;i++){
//         s.insert(arr1[i]);
//     }
//     for(int i=0;i<m;i++){
//         s.insert(arr2[i]);
//     }
//     cout<<"Union of two sorted array are:\n";
//     for(int x: s){
//         cout<<x<<" ";
//     }
// }



            //optimal using two pointer
            
int main() {
    cout << "Enter the size of 1st array\n";
    int n;
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter elements of 1st array\n";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of 2nd array\n";
    int m;
    cin >> m;

    vector<int> arr2(m);

    cout << "Enter elements of 2nd array\n";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> unionarr;

    int i = 0, j = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            if(unionarr.empty() || unionarr.back() != arr1[i])
                unionarr.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i] > arr2[j]) {
            if(unionarr.empty() || unionarr.back() != arr2[j])
                unionarr.push_back(arr2[j]);
            j++;
        }
        else {
            if(unionarr.empty() || unionarr.back() != arr1[i])
                unionarr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while(i < n) {
        if(unionarr.empty() || unionarr.back() != arr1[i])
            unionarr.push_back(arr1[i]);
        i++;
    }

    while(j < m) {
        if(unionarr.empty() || unionarr.back() != arr2[j])
            unionarr.push_back(arr2[j]);
        j++;
    }

    cout << "Union Array: ";
    for(int x : unionarr) {
        cout << x << " ";
    }

    return 0;
}