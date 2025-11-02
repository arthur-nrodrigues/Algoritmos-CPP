#include <bits/stdc++.h>
using namespace std;

int numDigitos(int n){
    if(n < 10){
        return 1;
    }
    return 1 + numDigitos(n/10);
}


int main(){

    int n;cin >> n;
    cout << numDigitos(n) << endl;

    return 0;
}