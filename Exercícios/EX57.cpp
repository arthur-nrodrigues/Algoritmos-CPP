#include <bits/stdc++.h>  
using namespace std;

void ultimaOcorrencia(int vet[],int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vet[i] > vet[j]){
                cout << vet[j] << " ";
            }
        }
    }
}


int main(){

    int vet[5] = {1,2,3,4,5};
    ultimaOcorrencia(vet,5);

    return 0;
}