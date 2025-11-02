#include <bits/stdc++.h>
using namespace std;

int soma(int a, int b){
    if(b == a){
        return a;
    }else{
        return b + soma(a,b-1);
    }
}

int main(){

    int a,b; cin >> a >> b;
    cout << soma(a,b) << endl;

    return 0;
}