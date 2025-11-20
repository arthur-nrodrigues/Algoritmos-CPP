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
}

void troca(int *a, int *menor){
    int aux = 0;
    aux = *a;
    *a = *menor;
    *menor = aux;
}

void insertionSort(int vet[],int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i;j<n;j++){
            if(vet[j] < vet[min]){
                troca(&vet[j], &vet[min]);
            }
        }
    }
}

int main(){

    int n; cin >> n;
    int *vet = new int[n];
    preencheVet(vet,n);
    imprimeVet(vet,n);
    insertionSort(vet,n);
    cout << endl;
    imprimeVet(vet,n);

    return 0;
}