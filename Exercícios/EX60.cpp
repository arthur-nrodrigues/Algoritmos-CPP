#include <bits/stdc++.h>
using namespace std;

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


void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubbleSort(int vet[], int n){
    for(int i = n-2; i >= 0; i--){
        if(i%2 == 0){
            for(int j = 0; j <= i; j++){
                if(vet[j] > vet[j+1]){
                    troca(&vet[j], &vet[j+1]);
                }
            } 
        }else{
            for(int j = i+1; j <= i; j--){
                if(vet[j] < vet[j-1]){
                    troca(&vet[j], &vet[j-1]);
                }
            }
        }
    }
}

int main(){

    int n; cin >> n;
    int *vet = new int[n];
    preencheVet(vet,n);
    bubbleSort(vet,n);
    imprimeVet(vet,n);

    return 0;
}