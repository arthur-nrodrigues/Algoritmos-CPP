#include <iostream>
#include <cstdlib>
#include "ListaDupla.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q3
void ListaDupla::insereAntes(int x, int val)
{
    NoDuplo *p = new NoDuplo();
    NoDuplo *u = new NoDuplo();
    p = primeiro;
    u = ultimo;

    for(int i = 0; i < n; i++){

        if(p->getInfo() == x){
            NoDuplo *novo = new NoDuplo();
            novo->setInfo(val);
            novo->setProx(p);
            novo->setAnt(p->getAnt());

            p->setAnt(NULL);

            n++;

        }
        p = p->getProx();
    }
}
//-Q3
// ----------------------------------------------------------------------------

ListaDupla::ListaDupla()
{
    primeiro = ultimo = NULL;
    n = 0;
}

ListaDupla::~ListaDupla()
{
    // OMITIDO
}

void ListaDupla::insereFinal(int val)
{
    NoDuplo *p = new NoDuplo();
    p->setInfo(val);
    p->setProx(NULL);
    p->setAnt(ultimo);
    if(n == 0)
        primeiro = p;
    else
        ultimo->setProx(p);
    ultimo = p;
    n++;
}

void ListaDupla::imprime()
{
    cout << "[";
    for(NoDuplo *p = primeiro; p != NULL; p = p->getProx())
    {
        cout << p->getInfo();
        if(p->getProx() != NULL)
            cout << ", ";
    }
    cout << "]" << endl;
}
