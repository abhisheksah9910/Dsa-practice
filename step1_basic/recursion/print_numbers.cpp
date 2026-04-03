#include<bits/stdc++.h>
using namespace std;

int num1 = 0;

void num(){
    if(num1 == 3){
        return;
    }
    cout << num1 << endl;
    num1++;
    num();
}

int main(){
    num();
}