#include <iostream>
#include "ListaCont.h"

using namespace std;

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

int ListaCont::get(int k)
{
    if(k >= 0 && k < n)
        return vet[k];
    cout << "ERRO GET: Posicao invalida" << endl;
    exit(1);
}

void ListaCont::set(int k, int val)
{
    if(k >= 0 && k < n)
        vet[k] = val;
    else
        cout << "ERRO SET: Posicao invalida" << endl;
}

void ListaCont::aumentaCapacidade()
{
    max *= 1.5;
    int *temp = new int[max];
    for(int i = 0; i < n; i++)
        temp[i] = vet[i];
    delete [] vet;
    vet = temp;
}

void ListaCont::aumentaCapacidade(int novoMax)
{
    max = novoMax;
    int *temp = new int[max];
    for(int i = 0; i < n; i++)
        temp[i] = vet[i];
    delete [] vet;
    vet = temp;
}

void ListaCont::insereFinal(int val)
{
    if(n == max)
    {
        //cout << "ERRO InsereFinal: Vetor cheio" << endl;
        cout << "ALERTA InsereFinal: Capacidade aumentada" << endl;
        aumentaCapacidade();
    }
    vet[n++] = val;
}

void ListaCont::removeFinal()
{
    if(n > 0)
        n--;
    else
        cout << "ERRO RemoveFinal: Lista vazia" << endl;
}

void ListaCont::insereInicio(int val)
{
    if(n == max)
    {
        //cout << "ERRO InsereInicio: Vetor cheio" << endl;
        cout << "ALERTA InsereInicio: Capacidade aumentada" << endl;
        aumentaCapacidade();
    }
    for(int i = n; i > 0; i--) //for(int i = n-1; i >= 0; i--)
        vet[i] = vet[i-1]; //vet[i+1] = vet[i];
    vet[0] = val;
    n++;
}

void ListaCont::removeInicio()
{
    if(n > 0)
    {
        for(int i = 0; i < n-1; i++)
            vet[i] = vet[i+1];
        n--;
    }
    else
        cout << "ERRO RemoveInicio: Lista vazia" << endl;
}

void ListaCont::insereK(int k, int val)
{
    if(k >= 0 && k < n)
    {
        if(n == max)
        {
            //cout << "ERRO InsereK: Vetor cheio" << endl;
            cout << "ALERTA InsereK: Capacidade aumentada" << endl;
            aumentaCapacidade();
        }
        for(int i = n; i > k; i--)
            vet[i] = vet[i-1];
        vet[k] = val;
        n++;
    }
    else
        cout << "ERRO InsereK: Posicao invalida" << endl;
}

void ListaCont::removeK(int k)
{
    if(k >= 0 && k < n)
    {
        if(n > 0)
        {
            for(int i = k; i < n-1; i++)
                vet[i] = vet[i+1];
            n--;
        }
        else
            cout << "ERRO RemoveK: Lista vazia" << endl;
    }
    else
        cout << "ERRO RemoveK: Posicao invalida" << endl;
}

void ListaCont::insereInicio2(int val)
{
    if(n > 0)
        insereK(0, val);
    else
        insereFinal(val); // vet[n++] = val;
}

void ListaCont::removeInicio2()
{
    removeK(0);
}

void ListaCont::imprime()
{
    cout << "Lista: ";
    for(int i = 0; i < n; i++)
        cout << vet[i] << " ";
    cout << endl;
}

int ListaCont::numNos()
{
    return n;
}

int ListaCont::buscaMaior(int val)
{
    for(int i = 0; i < n; i++)
        if(vet[i] > val)
            return i;
    return -1;
}

void ListaCont::limpar()
{
    n = 0;
}

void ListaCont::concatena(ListaCont *l2)
{
    if(max-n < l2->n)
        aumentaCapacidade((n+l2->n)*1.5);
    for(int i = 0; i < l2->n; i++)
        vet[n+i] = l2->vet[i];
    n += l2->n;
    //l2->n = 0; //opcional
}

ListaCont* ListaCont::concatenaNova(ListaCont *l2)
{
    ListaCont *nova = new ListaCont((n+l2->n)*1.5);
    for(int i = 0; i < n; i++)
        nova->vet[i] = vet[i];
    for(int i = 0; i < l2->n; i++)
        nova->vet[n+i] = l2->vet[i];
    nova->n = n+l2->n;
    //n = l2->n = 0; //opcional
    return nova;
}
