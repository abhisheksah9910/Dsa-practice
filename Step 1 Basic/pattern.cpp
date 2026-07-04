#include<bits/stdc++.h>
using namespace std;
// void print1(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print1(n);
// }


// void print2(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print2(n);
// }



// void print3(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print3(n);
// }


// void print4(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print4(n);
// }


// void print5(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print5(n);
// }


// void print6(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print6(n);
// }


// void print7(int n){
//     for(int i=0; i<n; i++){
//         //space
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0; j<2*i+1; j++){
//             cout<<"*";
//         }
//         //space
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print7(n);
// }


// void print7(int n){
//     for(int i=0; i<n; i++){
//         //space
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0; j<2*i+1; j++){
//             cout<<"*";
//         }
//         //space
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// void print8(int n){
//     for(int i=0; i<n; i++){
//         //space
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         //stars
//         for(int j=0; j<2*n-(2*i+1); j++){
//             cout<<"*";
//         }
//         //space
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }



//for pattern 9
// int main(){
//     int n;
//     cin>>n;
//     print7(n);
//     print8(n);
// }


// void print10(int n){
//     for(int i=1; i<=2*n; i++){
//         int star=i;
//         if(i>n) star =2*n-i;
//         for(int j=1; j<=star; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//  int main(){
//     int n;
//     cin>>n;
//     print10(n);
//  }

// //Another way of 10
// void print10_1(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// void print10_2(int n){
//     for(int i=1; i<n; i++){
//         for(int j=n-1; j>i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print10_1(n);
//     print10_2(n);
// }


// void print11(int n){
//     int start=1;
//     for(int i=0; i<n; i++){
//         if(i%2==0){
//             start =1;
//         }else{
//             start=0;
//         }
//         for(int j=0; j<=i; j++){
//             cout<<start;
//             start = 1-start;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print11(n);
// }


// void print12(int n){
//     int sapace = 2*(n-1);
//     for(int i=1; i<=n; i++){
//         //number
//         for(int j= 1; j<=i; j++){
//             cout<<j;
//         }
//         //space
//         for(int j=1; j<=sapace; j++){
//             cout<<" ";
//         }
//         //number
//         for(int j=i; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//         sapace-=2;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print12(n);
// }


// void print13(int n){
//     int num=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print13(n);
// }

// void print14(int n){
//     for(int i=0; i<n; i++){
//       for(char ch='A'; ch<='A'+i; ch++){
//         cout<<ch;
//       }  
//       cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print14(n);
// }


// void print15(int n){
//     for(int i=0; i<=n; i++){
//       for(char ch='A'; ch<'A'+(n-i+1); ch++){
//         cout<<ch;
//       }  
//       cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print15(n);
// }


// void print16(int n){
//     char ch='A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<ch;
//         }
//         ch++;
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print16(n);
// }

void print17(int n){
    char ch='A';
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i +1; j++){
            cout<<ch;
            ch++;
        }
        //space
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print17(n);
}