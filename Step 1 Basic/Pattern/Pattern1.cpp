#include <bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";

        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<j;
        }
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0; j<2*(n-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0; j<2*(n-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    int l=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<l;
        }
        l=0;
        cout<<endl;
    }
}

void pattern11(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start=1;
        }else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}

void pattern12(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=i+1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern13(int n){
    int start=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0;i<n;i++){
        char alpha = 'A';
        for(int j=0;j<=i;j++){
            cout<<alpha;
            alpha++;
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=0;i<n;i++){
        char alpha = 'A';
        for(int j=n;j>i;j--){
            cout<<alpha;

            alpha++;
        }

        cout<<endl;
    }
}

void pattern16(int n){
    char alpha='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<alpha;
        }
        alpha++;
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern18(int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        
        cout<<endl;
    }
}

void pattern19(int n){
    int num=(n+1)/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n || j==0 || j==n){
                cout<<num;
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern19(n);
}