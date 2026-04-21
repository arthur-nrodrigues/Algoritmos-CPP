#include <iostream>
#include "PilhaEncad.h"

using namespace std;

PilhaEncad::PilhaEncad()
{
    topo = NULL;
}

PilhaEncad::~PilhaEncad()
{
    No *p = topo;
    while(p != NULL)
    {
        topo = p->getProx();
        delete p;
        p = topo;
    }
}

int PilhaEncad::getTopo()
{
    if(topo != NULL)
        return topo->getInfo();
    else
    {
        cout << "ERRO GetTopo: Pilha Vazia" << endl;
        exit(1);
    }
}

void PilhaEncad::empilha(int val)
{
    No *p = new No();
    p->setInfo(val);
    p->setProx(topo);
    topo = p;
}

int PilhaEncad::desempilha()
{
    if(topo != NULL)
    {
        No *p = topo;
        topo = p->getProx();
        int val = p->getInfo();
        delete p;
        return val;
    }
    else
    {
        cout << "ERRO Desempilha: Pilha Vazia" << endl;
        exit(1);
    }
}

bool PilhaEncad::vazia()
{
    return topo == NULL;
}

void PilhaEncad::imprime()
{
    cout << "Pilha: ";
    for(No *p = topo; p != NULL; p = p->getProx())
        cout << p->getInfo() << " ";
    cout << endl;
}
