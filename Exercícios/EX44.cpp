#include <bits/stdc++.h>
using namespace std;

void leituraAux(int vet[],int n, int i){
    if(n == 1){
        cin >> vet[n-1];
    }
    cin >> vet[i];
    leituraAux(vet,n-1,i+1);
}

void leitura(int vet[], int n){
    return leituraAux(vet,n,0);
}

int main(){



    return 0;
}