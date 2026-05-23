#include <iostream>
using namespace std;
#include "ArvoreBin.h"

ArvBin::ArvBin()
{
    raiz = NULL;
}

ArvBin::~ArvBin()
{
    libera(raiz);
}

void ArvBin::libera(NoArv *p)
{
    if(p != NULL)
    {
        libera(p->getEsq());
        libera(p->getDir());
        delete p;
    }
}

void ArvBin::cria(int val, ArvBin *sae, ArvBin *sad)
{
    NoArv *p = new NoArv();
    p->setInfo(val);
    p->setEsq(sae->raiz);
    p->setDir(sad->raiz);
    raiz = p;
}

void ArvBin::imprime()
{
    auxImprime(raiz);
}

void ArvBin::auxImprime(NoArv *p)
{
    if(p != NULL)
    {
        cout << p->getInfo() << " ";
        auxImprime(p->getEsq());
        auxImprime(p->getDir());
    }
}

int ArvBin::impares()
{
    return auxImpares(raiz);
}

int ArvBin:: auxImpares(NoArv *p)
{
    if(p != NULL)
    {

        int cont = 0;
        if(p->getInfo()%2 != 0)
            cont++;
        int imparEsq = auxImpares(p->getEsq());
        int imparDir = auxImpares(p->getDir());

        return imparDir + imparEsq + cont;
    }
    return 0;

}

int ArvBin::soma()
{
    return auxSomaNos(raiz);
}

int ArvBin::auxSomaNos(NoArv *p)
{
    if(p != NULL)
    {
        return p->getInfo() + auxSomaNos(p->getEsq()) + auxSomaNos(p->getDir());
    }
    return 0;
}

float ArvBin::media()
{
    if(raiz != NULL)
    {
        int somaTotal = soma();
        int nosTotal =  contaNos();

        return (float)somaTotal/nosTotal;
    }
    return 0;
}

int ArvBin::contaNos()
{
    return auxContaNos(raiz);
}

int ArvBin::auxContaNos(NoArv *p)
{
    if(p != NULL)
    {
        return 1 + auxContaNos(p->getEsq()) + auxContaNos(p->getDir());
    }
    return 0;
}

int ArvBin::maior()
{
    return auxMaior(raiz);
}

int ArvBin::auxMaior(NoArv *p)
{
    if(p != NULL)
    {
        int maiorEsq = auxMaior(p->getEsq());
        int maiorDir = auxMaior(p->getDir());

        int maior = p->getInfo();
        if(maiorEsq > maior)
            maior = maiorEsq;
        else if(maiorDir > maior)
            maior = maiorDir;

        return maior;
    }
    return 0;
}


int ArvBin::maiores(int val)
{
    return auxMaiores(raiz, val);
}

int ArvBin::auxMaiores(NoArv *p, int val)
{
    if(p != NULL)
    {
        int maioresEsq = auxMaiores(p->getEsq(),val);
        int maioresDir = auxMaiores(p->getDir(),val);

        int ehmaior = p->getInfo();
        int cont = 0;
        if(ehmaior > val)
            cont++;

        return cont + maioresEsq + maioresDir;
    }
    return 0;
}
