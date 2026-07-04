#include<bits/stdc++.h>
using namespace std;

void sumofN(int i, int sum){
    if(i < 1){
        cout << sum;
        return;
    }
    sumofN(i - 1, sum + i);
}

int main(){
    int n;
    cin >> n;
    sumofN(n, 0);
}

#include<bits/stdc++.h>
using namespace std;

int sumofN(int n){
    if(n == 0){
        return 0;
    }
    return n + sumofN(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << sumofN(n);
}