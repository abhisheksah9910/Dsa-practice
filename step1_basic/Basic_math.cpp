#include<bits/stdc++.h>
using namespace std;
//count the number
// int main(){
//     int n,last,num;
//     cin>>n;
//     int count=0;
//     while(n>0){
//         last=n%10;
//         count++;
//         n=n/10;
//     }
//     cout<<count;
// }

// Another way of counting
// int count(int n){
//     int cnt = (int)(log10(n)+1);
//     return cnt;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<count(n);
// }


// //reverse of number
// int main(){
//     int rev=0;
//     int n;
//     cin>>n;
//     while(n>0){
//         int a=n%10;
//         rev=(rev*10)+a;
//         n=n/10;
//     }
//     cout<<rev;
// }

// //Palindrome number
// int main(){
//     int rev=0;
//     int n;
//     cin>>n;
//     int p=n;
//     while(n>0){
//         int a=n%10;
//         rev=(rev*10)+a;
//         n=n/10;
//     }
//     if(rev==p){
//         cout<<true;
//     }else{
//         cout<<false;
//     } 
// }


//Armstrong Numbers
// int main(){
//     int n,num,temp,temp1,last,digit=0;
//     int sum=0;
//     cin>>n;
//     temp1=n;
//     num=n;
//     //count
//     while(num>0){
//         digit++;
//         num=num/10;
//     }
//     num=n;
//     while(num>0){
//         temp=num%10;
//         sum=sum+pow(temp,digit);
//         num=num/10;
//     }
//     cout<<sum<<endl;
//     if(temp1==sum){
//         cout<<"Armstrong Numbers";
//     }else{
//         cout<<"Not an Armstrong Numbers";
//     }
// }



// //Divisor of number
// int main(){
//     int n,num;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }


// //prime number
// int main(){
//     int n,count=0;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             count++;
//         }

//     }
//     if(count==2){
//         cout<<"Prime number";
//     }else{
//         cout<<"Not Prime";
//     }
// }


//GCD(HCF)
// int main(){
//     int n1,n2,i,gcd=1;
//     cout<<"Enter your 1st number";
//     cin>>n1;
//     cout<<"Enter your 2nd number";
//     cin>>n2;
//     for(i=1;i<=(min(n1,n2));i++){
//         if(n1%i==0 && n2%i ==0){
//             gcd=i;
            
//         }
//     }
//     cout<<gcd<<" ";
// }
// GCD by ecludian method
// int main(){
//     int a,b;
//     cin>>a>>b;
//     while(a>0 && b>0){
//         if(a>b){
//             a=a%b;
//         }else{
//             b=b%a;
//         }
//     }if(a>b){
//         cout<<a;
//     }else{
//         cout<<b;
//     }
// }