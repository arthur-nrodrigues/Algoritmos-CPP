#include <iostream>
#include "PilhaEncad.h"

using namespace std;

void inverte(int vet[], int n)
{
    PilhaEncad p;
    for(int i = 0; i < n; i++)
        p.empilha(vet[i]);
    for(int i = 0; i < n; i++)
        vet[i] = p.desempilha();
}

void removeVal(PilhaEncad *p, int val)
{
    PilhaEncad aux;
    while(!p->vazia())
    {
        if(p->getTopo() != val)
            aux.empilha(p->desempilha());
        else
        {
            p->desempilha();
            break;
        }
    }
    while(!aux.vazia())
        p->empilha(aux.desempilha());
}

int main()
{
    int v[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++)
        cout << v[i] << " ";
    cout << endl;
    inverte(v, 5);
    for(int i = 0; i < 5; i++)
        cout << v[i] << " ";
    cout << endl;

    PilhaEncad p;
    p.empilha(1);
    p.imprime();
    p.empilha(2);
    p.imprime();
    p.empilha(3);
    p.imprime();
    cout << "Removeu " << p.desempilha() << endl;
    p.imprime();
    p.empilha(4);
    p.imprime();
    p.empilha(999);
    p.imprime();
    p.empilha(5);
    p.imprime();
    removeVal(&p, 9999);
    p.imprime();
    return 0;
}
