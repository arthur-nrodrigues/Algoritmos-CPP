#include <iostream>
#include <cmath>
#include "ArvBinBusca.h"

using namespace std;

ArvBinBusca::ArvBinBusca()
{
    raiz = NULL;
}

ArvBinBusca::~ArvBinBusca()
{
    libera(raiz);
}

void ArvBinBusca::libera(NoArv *p)
{
    if(p != NULL)
    {
        libera(p->getEsq());
        libera(p->getDir());
        delete p;
    }
}

bool ArvBinBusca::vazia()
{
    return raiz == NULL;
}

int ArvBinBusca::getRaiz()
{
    if(raiz != NULL)
        return raiz->getInfo();
    cout << "ERRO: Arvore vazia!" << endl;
    exit(1);
}

void ArvBinBusca::imprime()
{
    cout << "Pre-Ordem: " << endl;
    auxImprime(raiz, 0);
    cout << endl;
}

void ArvBinBusca::auxImprime(NoArv *p, int nivel)
{
    if(p != NULL)
    {
        for(int i = 0; i < nivel; i++)
            cout << "   ";
        cout << p->getInfo() << endl;
        auxImprime(p->getEsq(), nivel+1);
        auxImprime(p->getDir(), nivel+1);
    }
}

bool ArvBinBusca::busca(int val)
{
    return auxBusca(raiz, val);
}

bool ArvBinBusca::auxBusca(NoArv *p, int val)
{
    if(p == NULL)
        return false;
    else if(p->getInfo() == val)
        return true;
    else if(val < p->getInfo())
        return auxBusca(p->getEsq(), val);
    else // val > p->getInfo()
        return auxBusca(p->getDir(), val);
}

bool ArvBinBusca::busca2(int val)
{
    NoArv *p = raiz;
    while(p != NULL)
    {
        if(p->getInfo() == val)
            return true;
        else if(val < p->getInfo())
            p = p->getEsq();
        else
            p = p->getDir();
    }
    return false;
}

void ArvBinBusca::insere(int val)
{
    raiz = auxInsere(raiz, val);
}

NoArv* ArvBinBusca::auxInsere(NoArv *p, int val)
{
    if(p != NULL)
    {
        if(val < p->getInfo())
            p->setEsq(auxInsere(p->getEsq(), val));
        else
            p->setDir(auxInsere(p->getDir(), val));
    }
    else
    {
        p = new NoArv();
        p->setInfo(val);
        p->setEsq(NULL);
        p->setDir(NULL);
    }
    return p;
}

void ArvBinBusca::insere2(int val)
{
    NoArv *p = raiz;
    NoArv *pai = NULL;
    while(p != NULL)
    {
        pai = p;
        if(val < p->getInfo())
            p = p->getEsq();
        else
            p = p->getDir();
    }
    p = new NoArv();
    p->setInfo(val);
    p->setEsq(NULL);
    p->setDir(NULL);
    if(pai == NULL)
        raiz = p;
    else if(pai->getInfo() > p->getInfo())
        pai->setEsq(p);
    else
        pai->setDir(p);
}

void ArvBinBusca::remove(int val)
{
    raiz = auxRemove(raiz, val);
}

NoArv* ArvBinBusca::auxRemove(NoArv *p, int val)
{
    if(p != NULL)
    {
        if(val < p->getInfo())
            p->setEsq(auxRemove(p->getEsq(), val));
        else if(val > p->getInfo())
            p->setDir(auxRemove(p->getDir(), val));
        else //achou
        {
            if(p->getEsq() == NULL && p->getDir() == NULL) // folha
            {
                delete p;
                return NULL;
            }
            else if(p->getEsq() != NULL && p->getDir() == NULL) // 1 filho esq
            {
                NoArv *aux = p->getEsq();
                delete p;
                return aux;
            }
            else if(p->getEsq() == NULL && p->getDir() != NULL) // 1 filho dir
            {
                NoArv *aux = p->getDir();
                delete p;
                return aux;
            }
            else // 2 filhos
            {
                NoArv *aux = p->getDir();
                while(aux->getEsq() != NULL)
                    aux = aux->getEsq();
                p->setInfo(aux->getInfo());
                aux->setInfo(val);
                p->setDir(auxRemove(p->getDir(), val));
            }
        }
    }
    return p;
}

int ArvBinBusca::menor()
{
    if(raiz == NULL)
    {
        cout << "ERRO: Arvore vazia" << endl;
        exit(1);
    }
    NoArv *p = raiz;
    while(p->getEsq() != NULL)
        p = p->getEsq();
    return p->getInfo();
}

void ArvBinBusca::removeMenor()
{
    if(raiz == NULL)
        cout << "ERRO: Arvore vazia" << endl;
    else
    {
        NoArv *p = raiz;
        NoArv *pai = NULL;
        while(p->getEsq() != NULL)
        {
            pai = p;
            p = p->getEsq();
        }
        if(pai == NULL) //p == raiz
            raiz = p->getDir();
        else
            pai->setEsq(p->getDir());
        delete p;
    }
}

int ArvBinBusca::somaCaminho(int val)
{
    int soma = 0;
    NoArv *p = raiz;
    while(p != NULL)
    {
        soma += p->getInfo();
        if(p->getInfo() == val)
            break;
        else if(val < p->getInfo())
            p = p->getEsq();
        else //val < p->getInfo()
            p = p->getDir();
    }
    return soma;
}

int ArvBinBusca::altura()
{
    return auxAltura(raiz);
}

int ArvBinBusca::auxAltura(NoArv *p)
{
    if(p == NULL)
        return -1;
    int he = auxAltura(p->getEsq());
    int hd = auxAltura(p->getDir());
    return (he > hd ? he+1 : hd+1);
}

int ArvBinBusca::contaNos()
{
    return auxContaNos(raiz);
}

int ArvBinBusca::auxContaNos(NoArv *p)
{
    if(p != NULL)
        return 1 + auxContaNos(p->getEsq()) + auxContaNos(p->getDir());
    return 0;
}

bool ArvBinBusca::balanceada()
{
    int n = 0;
    int h = auxBalanceada(raiz, &n);
    return h < log2(n) + 1;
}

int ArvBinBusca::auxBalanceada(NoArv *p, int *cont)
{
    if(p == NULL)
        return -1;
    *cont += 1;
    int he = auxBalanceada(p->getEsq(), cont);
    int hd = auxBalanceada(p->getDir(), cont);
    return (he > hd ? he+1 : hd+1);
}

void ArvBinBusca::imprimeNivel(int k)
{
    cout << "Nivel " << k << ": ";
    auxImprimeNivel(raiz, 0, k);
    cout << endl;
}

void ArvBinBusca::auxImprimeNivel(NoArv *p, int nivel, int k)
{
    if(p != NULL)
    {
        if(nivel == k)
            cout << p->getInfo() << " ";
        else
        {
            auxImprimeNivel(p->getEsq(), nivel+1, k);
            auxImprimeNivel(p->getDir(), nivel+1, k);
        }
    }
}

void ArvBinBusca::imprimeAteNivel(int k)
{
    auxImprimeAteNivel(raiz, 0, k);
    cout << endl;
}

void ArvBinBusca::auxImprimeAteNivel(NoArv *p, int nivel, int k)
{
    if(p != NULL)
    {
        if(nivel <= k)
            cout << p->getInfo() << " ";
        if(nivel < k)
        {
            auxImprimeAteNivel(p->getEsq(), nivel+1, k);
            auxImprimeAteNivel(p->getDir(), nivel+1, k);
        }
    }
}

void ArvBinBusca::imprimeIntervalo(int a, int b)
{
    cout << "[" << a << "," << b << "]: ";
    auxImprimeIntervalo(raiz, a, b);
    cout << endl;
}

void ArvBinBusca::auxImprimeIntervalo(NoArv *p, int a, int b)
{
    if(p != NULL)
    {
        if(p->getInfo() >= a && p->getInfo() <= b)
            cout << p->getInfo() << " ";
        if(a < p->getInfo())
            auxImprimeIntervalo(p->getEsq(), a, b);
        if(b >= p->getInfo())
            auxImprimeIntervalo(p->getDir(), a, b);
    }
}
