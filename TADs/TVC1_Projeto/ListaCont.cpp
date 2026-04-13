#include <iostream>
#include <cstdlib>
#include "ListaCont.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q1
void ListaCont::removeOcorrencias(int val)
{
    for(int i=n-1;i>=0;i--){
        if(vet[i] == val){
            for(int j = i; j < n - 1; j++){
                vet[j] = vet[j+1];
            }
            n--;
        }

    }
}
//-Q1
// ----------------------------------------------------------------------------

ListaCont::ListaCont(int tam)
{
    max = tam;
    n = 0;
    vet = new int[max];
}

ListaCont::~ListaCont()
{
    delete [] vet;
}

void ListaCont::insereFinal(int val)
{
    if(n == max)
    {
        cout << "ERRO: Vetor Cheio!" << endl;
        exit(1);
    }
    vet[n++] = val;
}

void ListaCont::imprime()
{
    cout << "[";
    for(int i = 0; i < n; i++)
    {
        cout << vet[i];
        if(i < n-1)
            cout << ", ";
    }
    cout << "]" << endl;
}
