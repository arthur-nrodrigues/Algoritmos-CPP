#include <bits/stdc++.h>
using namespace std;

int func1(int n,int vet[],int ch){
    int cont = 0;
    for(int i=0;i<n;i++){
        if(vet[i] > ch){
            cont++;
            cout << "posicao " << i << " valor " << vet[i] << " endereco " << &vet[i] << endl;
        }
    }
    return cont;
}

int *func2(int n,int vet[],int ch,int tam){
    int *ptrVet = new int[tam];

    if(tam == 0){
        return NULL;
    }

    int j = 0;
    for(int i=0;i<n;i++){
        if(vet[i] > ch){
            ptrVet[j] = vet[i];
            j++;
        }
    }
    return ptrVet;
}

int main(){

    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int cont = func1(10,vetor,3);

    cout << func1(10,vetor,3) << endl;
    int *p = func2(10,vetor,3,cont);
    for(int i=0;i<cont;i++){
        cout << p[i] << " ";
    }


    return 0;
}