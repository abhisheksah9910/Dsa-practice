#include<bits/stdc++.h>
using namespace std;

int a = 1;

void printname(int n){
    cout << "Abhi" << " ";
    if(a == n){
        return;
    }
    a++;
    printname(n);
}

int main(){
    int n;
    cin >> n;
    printname(n);
}
