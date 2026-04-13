#include <iostream>
using namespace std;
#include "Listacont.h"

ListaCont::ListaCont(int tam){

    int max = tam;
    int n = 0;
    vet = new int[max];
}

ListaCont::~ListaCont(){

    delete []vet;
}

int ListaCont::get(int k){

    return vet[k];
}


void ListaCont::set(int k, int val){

    vet[k] = val;
}

void ListaCont::imprime(){

    for(int i = 0;i < n;i++){
        cout << vet[i] << " ";
        cout << endl;
    }
}

void ListaCont::insereFinal(int val){

    vet[n] = val;
    n++;

}
