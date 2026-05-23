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
    return auxSoma(raiz);
}

int ArvBin::auxSoma(NoArv *p)
{
    if(p != NULL)
    {
        int soma = 0;
        soma += p->getInfo();
        soma += auxSoma(p->getEsq());
        soma += auxSoma(p->getDir());

        return soma;
    }
    return 0;
}

float ArvBin::media()
{
    int nos = 0; int soma = 0;
    auxMedia(raiz, &nos, &soma);
    return 1.0 * (soma/nos);
}

void ArvBin::auxMedia(NoArv *p, int *nos, int *soma)
{
    if(p != NULL)
    {
        *soma += p->getInfo(); // Contou a raiz.
        *nos += 1; //Contou a raiz.
        auxMedia(p->getEsq(),nos,soma);
        auxMedia(p->getDir(),nos,soma);
    }
}

float ArvBin::media2()
{
    return auxMedia2(raiz);
}

float ArvBin::auxMedia2(NoArv *p)
{
    if(p != NULL)
    {
        int cont = 0;
        int soma = 0;
        cont = 1 + auxMedia2(p->getEsq()) + auxMedia2(p->getDir());
        soma += p->getInfo();
        soma += auxMedia2(p->getEsq());
        soma += auxMedia2(p->getDir());
        return 1.0 * (soma/cont);
    }
    return 0;
}
