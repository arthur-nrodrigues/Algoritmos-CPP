#include <bits/stdc++.h>
using namespace std;

int soma(int n){
    if(n == 1){
        return 1;
    }else{
        return n + soma(n-1);
    }
}

int main(){

    int n; cin >> n;
    cout << soma(n) << endl;

    return 0;
}