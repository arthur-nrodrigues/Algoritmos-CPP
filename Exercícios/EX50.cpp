#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int fib = 0, aux = 0;
    int penultimo = 1;
    int antiPenultimo = 0;

    for(int i=1;i<n-1;i++){
        fib = antiPenultimo + penultimo;
        aux = penultimo;
        penultimo = fib;
        antiPenultimo = aux;
    }

    cout << n << " = " << fib << endl; 


    return 0;
}