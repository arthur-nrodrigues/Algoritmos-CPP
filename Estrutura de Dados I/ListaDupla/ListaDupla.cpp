#include <iostream>
#include "ListaDupla.h"

using namespace std;

ListaDupla::ListaDupla()
{
    primeiro = ultimo = NULL;
    n = 0;
}

ListaDupla::~ListaDupla()
{
    NoDuplo *p = primeiro;
    while(p != NULL)
    {
        primeiro = p->getProx();
        delete p;
        p = primeiro;
    }
}

bool ListaDupla::busca(int val)
{
    for(NoDuplo *p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;
    return false;
}

void ListaDupla::insereInicio(int val)
{
    NoDuplo *p = new NoDuplo();
    p->setAnt(NULL);
    p->setInfo(val);
    p->setProx(primeiro);
    if(primeiro == NULL)
        ultimo = p;
    else
        primeiro->setAnt(p);
    primeiro = p;
    n++;
}

void ListaDupla::removeInicio()
{
    if(primeiro != NULL)
    {
        NoDuplo *p = primeiro;
        primeiro = p->getProx();
        if(primeiro == NULL)
            ultimo = NULL;
        else
            primeiro->setAnt(NULL);
        delete p;
        n--;
    }
    else
        cout << "ERRO RemoveInicio: Lista Vazia" << endl;
}

void ListaDupla::insereFinal(int val)
{
    NoDuplo *p = new NoDuplo();
    p->setProx(NULL);
    p->setInfo(val);
    p->setAnt(ultimo);
    if(ultimo == NULL)
        primeiro = p;
    else
        ultimo->setProx(p);
    ultimo = p;
    n++;
}

void ListaDupla::removeFinal()
{
    if(ultimo != NULL)
    {
        NoDuplo *p = ultimo;
        ultimo = p->getAnt();
        if(ultimo == NULL)
            primeiro = NULL;
        else
            ultimo->setProx(NULL);
        delete p;
        n--;
    }
    else
        cout << "ERRO RemoveInicio: Lista Vazia" << endl;
}

void ListaDupla::imprime()
{
    cout << "Lista: ";
    for(NoDuplo *p = primeiro; p != NULL; p = p->getProx())
        cout << p->getInfo() << " ";
    cout << endl;
}

void ListaDupla::imprimeReverso()
{
    cout << "Lista Reversa: ";
    for(NoDuplo *p = ultimo; p != NULL; p = p->getAnt())
        cout << p->getInfo() << " ";
    cout << endl;
}

void ListaDupla::concatena(ListaDupla *l2)
{
    if(primeiro != NULL)
        ultimo->setProx(l2->primeiro);
    else
        primeiro = l2->primeiro;
    if(l2->primeiro != NULL)
    {
        l2->primeiro->setAnt(ultimo);
        ultimo = l2->ultimo;
    }
    n += l2->n;
    l2->primeiro = l2->ultimo = NULL;
    l2->n = 0;
}

ListaDupla* ListaDupla::concatenaNova(ListaDupla *l2)
{
    ListaDupla *nova = new ListaDupla;
    if(primeiro != NULL && l2->primeiro != NULL)
    {
        ultimo->setProx(l2->primeiro);
        l2->primeiro->setAnt(ultimo);
    }
    if(primeiro != NULL)
        nova->primeiro = primeiro;
    else
        nova->primeiro = l2->primeiro;
    if(l2->ultimo != NULL)
        nova->ultimo = l2->ultimo;
    else
        nova->ultimo = ultimo;
    nova->n = n + l2->n;
    primeiro = ultimo = NULL;
    l2->primeiro = l2->ultimo = NULL;
    n = l2->n = 0;
    return nova;
}
