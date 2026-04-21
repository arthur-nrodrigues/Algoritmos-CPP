#include <iostream>
#include "FilaCont.h"

using namespace std;

FilaCont::FilaCont(int tam)
{
    max = tam;
    inicio = 0;
    fim = -1;
    vet = new int[max];
}

FilaCont::~FilaCont()
{
    delete [] vet;
}

int FilaCont::getInicio()
{
    if(fim >= inicio)
        return vet[inicio];
    cout << "ERRO GetInicio: Fila vazia" << endl;
    exit(1);
}

void FilaCont::enfileira(int val)
{
    if(fim == max-1)
        cout << "ERRO Enfileira: Vetor cheio" << endl;
    else
        vet[++fim] = val;
}

int FilaCont::desenfileira()
{
    if(fim >= inicio)
    {
        inicio++;
        return vet[inicio-1];
    }
    cout << "ERRO Desenfileira: Lista vazia" << endl;
    exit(1);
}

bool FilaCont::vazia()
{
    return inicio > fim;
}

void FilaCont::imprime()
{
    cout << "Fila: ";
    for(int i = inicio; i <= fim; i++)
        cout << vet[i] << " ";
    cout << endl;
}
