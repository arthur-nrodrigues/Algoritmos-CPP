#include <iostream>
#include "ListaEncad.h"

using namespace std;

ListaEncad::ListaEncad()
{
    primeiro = NULL;
}

ListaEncad::~ListaEncad()
{
    No *p = primeiro;
    while(p != NULL)
    {
        primeiro = p->getProx();
        delete p;
        p = primeiro;
    }
}

int ListaEncad::get(int k)
{
    if(k < 0)
    {
        cout << "ERRO GET: Posicao invalida" << endl;
        exit(1);
    }
    int i = 0;
    for(No *p = primeiro; p != NULL; p = p->getProx(), i++)
        if(i == k)
            return p->getInfo();
    cout << "ERRO GET: Posicao invalida" << endl;
    exit(1);
}

void ListaEncad::set(int k, int val)
{
    if(k < 0)
        cout << "ERRO SET: Posicao invalida" << endl;
    else
    {
        int i = 0;
        for(No *p = primeiro; p != NULL; p = p->getProx(), i++)
            if(i == k)
            {
                p->setInfo(val);
                return;
            }
        cout << "ERRO SET: Posicao invalida" << endl;
    }
}

void ListaEncad::insereInicio(int val)
{

    No *p = new No();
    p->setInfo(val);
    p->setProx(primeiro);
    primeiro = p;
}

void ListaEncad::removeInicio()
{
    if(primeiro != NULL)
    {
        No *p = primeiro;
        primeiro = p->getProx();
        delete p;
    }
    else
        cout << "ERRO RemoveInicio: Lista Vazia" << endl;
}

void ListaEncad::insereFinal(int val)
{
    No *p = new No(val, NULL);
    if(primeiro == NULL)
        primeiro = p;
    else
    {
        No *ultimo = primeiro;
        while(ultimo->getProx() != NULL)
            ultimo = ultimo->getProx();
        ultimo->setProx(p);
    }
}

void ListaEncad::removeFinal()
{
    if(primeiro != NULL) // nenhum nó
    {
        if(primeiro->getProx() == NULL) // um nó
        {
            delete primeiro;
            primeiro = NULL;
        }
        else // vários nós
        {
            No *penultimo = primeiro;
            while(penultimo->getProx()->getProx() != NULL)
                penultimo = penultimo->getProx();
            No *ultimo = penultimo->getProx();
            penultimo->setProx(NULL);
            delete ultimo;
        }
    }
    else
        cout << "ERRO RemoveFinal: Lista Vazia" << endl;
}

void ListaEncad::insereK(int k, int val)
{
    if(k < 0)
        cout << "ERRO InsereK: Posicao invalida" << endl;
    else
    {
        if(k == 0 && primeiro != NULL)
            insereInicio(val);
        else
        {
            int i = 0;
            for(No *p = primeiro; p != NULL; p = p->getProx(), i++)
                if(i == k-1)
                {
                    if(p->getProx() == NULL)
                        break;
                    No *novo = new No();
                    novo->setInfo(val);
                    novo->setProx(p->getProx());
                    p->setProx(novo);
                    return;
                }
            cout << "ERRO InsereK: Posicao invalida" << endl;
        }
    }
}

void ListaEncad::removeK(int k)
{
    if(k < 0)
        cout << "ERRO RemoveK: Posicao invalida" << endl;
    else
    {
        if(k == 0 && primeiro != NULL)
            removeInicio();
        else
        {
            int i = 0;
            for(No *p = primeiro; p != NULL; p = p->getProx(), i++)
                if(i == k-1)
                {
                    No *aux = p->getProx();
                    if(aux == NULL)
                        break;
                    p->setProx(aux->getProx());
                    delete aux;
                    return;
                }
            cout << "ERRO RemoveK: Posicao invalida" << endl;
        }
    }
}

void ListaEncad::imprime()
{
    cout << "Lista: ";
    for(No *p = primeiro; p != NULL; p = p->getProx())
        cout << p->getInfo() << " ";
    cout << endl;
}

int ListaEncad::contaMaiores (int val ){
    No *p = new No();
    int cont = 0;

    for(p = primeiro; p->getProx() != NULL; p = p->getProx()){
        if(p->getInfo() > val){
            cont++;
        }

    }
    return cont;

}

int ListaEncad::getComprimento (){
    No *p = new No();
    p = primeiro;
    int cont = 0;

    while(p->getProx() != NULL){
        cont++;
        p->setProx();
    }
    return cont;
}
