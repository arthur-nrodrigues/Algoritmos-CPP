#include <iostream>
#include <cstdlib>
#include "ListaEncad.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q2
ListaEncad* ListaEncad::intercala(ListaEncad *l2)
{
    ListaEncad *l3 = new ListaEncad();

    No *Lista1 = primeiro;
    No *Lista2 = l2->primeiro;


    int total = n + l2->n + abs(l2->n - n);
    for(int i = 0; i < total; i++)
    {
        if(i%2 == 0)
        {
            if(Lista1 != NULL)
            {
                l3->insereFinal(Lista1->getInfo());
                Lista1 = Lista1->getProx();
            }
        }
        else
        {
            if(Lista2 != NULL)
            {
                l3->insereFinal(Lista2->getInfo());
                Lista2 = Lista2->getProx();
            }
        }
    }

    return l3;
}
//-Q2
// ----------------------------------------------------------------------------

ListaEncad::ListaEncad()
{
    primeiro = ultimo = NULL;
    n = 0;
}

ListaEncad::~ListaEncad()
{
    // OMITIDO
}

void ListaEncad::insereFinal(int val)
{
    No *p = new No();
    p->setInfo(val);
    p->setProx(NULL);
    if(ultimo != NULL)
        ultimo->setProx(p);
    else
        primeiro = p;
    ultimo = p;
    n++;
}

void ListaEncad::imprime()
{
    cout << "[";
    for(No *p = primeiro; p != NULL; p = p->getProx())
    {
        cout << p->getInfo();
        if(p->getProx() != NULL)
            cout << ", ";
    }
    cout << "]" << endl;
}
