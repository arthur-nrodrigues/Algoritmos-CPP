#include <bits/stdc++.h>
using namespace std;
//Implementando o BoobleSort.

void preencheVet(int vet[],int n){
    for(int i=0;i<n;i++){
        cin >> vet[i];
    }
}

void imprimeVet(int vet[],int n){
    for(int i=0;i<n;i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

void troca(int *a,int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void BoobleSort(int vet[],int n){
    int cont = 0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(vet[j] > vet[j+1]){
                troca(&vet[j], &vet[j+1]);
                cont++;
            }
        }
        if(cont == 0){
            break;
        }
    }
}


int main(){

    int n; cin >> n;
    int *vet = new int[n];
    preencheVet(vet,n);
    BoobleSort(vet,n);
    imprimeVet(vet,n);


    delete []vet;

    return 0;
}