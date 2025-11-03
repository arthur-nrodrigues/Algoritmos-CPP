#include <bits/stdc++.h>
using namespace std;

void leituraAux(int vet[],int n, int i){
    if(n == 1){
        cin >> vet[i];          // Caso base
    }else{
        cin >> vet[i];
        leituraAux(vet,n-1,i+1);        // Passo recursivo
    }
}

void leitura(int vet[], int n){
    return leituraAux(vet,n,0);         // função auxiliar
}

bool busca(int val, int vet[], int n){
    if(n == 0){
        return false;
    }

    if(vet[n-1] == val){            // Passo recursivo
        return true;
    }else{
        return busca(val,vet,n-1);
    }
}

int main(){

    int vet[5];
    leitura(vet,5);

    for(int i=0;i<5;i++){
        cout << vet[i] << " ";
    }
    cout << endl;
    int val; cin >> val;
    if(busca(val,vet,5)){
        cout << "Valor encontrado!" << endl;
    }else{
        cout << "Valor nao encontrado :(" << endl;
    }

    return 0;
}