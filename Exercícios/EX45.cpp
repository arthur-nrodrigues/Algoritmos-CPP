#include <bits/stdc++.h>
using namespace std;

void leituraAux(int vet[],int n, int i){
    if(n == 1){
        cin >> vet[i];         
    }else{
        cin >> vet[i];
        leituraAux(vet,n-1,i+1);        
    }
}

void leitura(int vet[], int n){
    return leituraAux(vet,n,0);     
}

void inverteAux(int vet[],int f, int i){
    int aux = 0;
    if(i >= f){
        return;
    }else{
        aux = vet[i];
        vet[i] = vet[f];
        vet[f] = aux;
        inverteAux(vet,f-1,i+1);
    }
}

void inverte(int vet[], int n){
    inverteAux(vet,n-1,0);
}

int main(){

    int vet[5];
    leitura(vet,5);
    inverte(vet,5);

    for(int i=0;i<5;i++){
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
}