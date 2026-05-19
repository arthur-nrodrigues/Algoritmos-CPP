#include <iostream>
#include <sstream>
#include "ArvBin.h"

using namespace std;

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

bool ArvBin::vazia()
{
    return raiz == NULL;
}

void ArvBin::anulaRaiz()
{
    raiz = NULL;
}

int ArvBin::getRaiz()
{
    if(raiz != NULL)
        return raiz->getInfo();
    cout << "ERRO: Arvore vazia!" << endl;
    exit(1);
}

void ArvBin::cria(int val, ArvBin *sae, ArvBin *sad)
{
    NoArv *p = new NoArv();
    p->setInfo(val);
    p->setEsq(sae->raiz);
    p->setDir(sad->raiz);
    raiz = p;
}

void ArvBin::montaArvore()
{
    if(!vazia())
        cout << "A arvore jah estah montada." << endl;
    else
    {
        cout << "Raiz" << endl;
        raiz = auxMontaArvore();
    }
}

NoArv* ArvBin::auxMontaArvore()
{
    cout << "Valor (ou NULL): ";
    string linha;
    cin >> linha;
    if(linha != "NULL" && linha != "null" && linha != "N" && linha != "n")
    {
        istringstream ent(linha);
        int val;
        ent >> val; // string p/ int
        NoArv *p = new NoArv();
        p->setInfo(val);
        cout << "Esquerda" << endl;
        p->setEsq(auxMontaArvore());
        cout << "Volta no noh " << p->getInfo() << endl;
        cout << "Direita" << endl;
        p->setDir(auxMontaArvore());
        cout << "Volta no noh " << p->getInfo() << endl;
        return p;
    }
    else
        return NULL;
}

void ArvBin::insere(int val)
{
    raiz = auxInsere(raiz, val);
}

NoArv* ArvBin::auxInsere(NoArv *p, int val)
{
    if(p != NULL)
    {
        cout << "(e) Esquerda ou (d) Direita do noh " << p->getInfo() << ": ";
        char dir;
        cin >> dir;
        if(dir == 'e')
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

void ArvBin::insere2(int val)
{
    NoArv *p = raiz;
    NoArv *pai = NULL;
    char dir;
    while(p != NULL)
    {
        cout << "(e) Esquerda ou (d) Direita do noh " << p->getInfo() << ": ";
        cin >> dir;
        pai = p;
        if(dir == 'e')
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
    else if(dir == 'e')
        pai->setEsq(p);
    else
        pai->setDir(p);
}

void ArvBin::imprime()
{
    cout << "Pre-Ordem: ";
    auxImprime(raiz);
    cout << endl;
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

void ArvBin::percursoEmLargura()
{
    cout << "Largura:   ";
    if(raiz == NULL)
    {
        cout << endl;
        return;
    }
    FilaEncad f;
    f.enfileira(raiz);
    while(!f.vazia())
    {
        NoArv *p = f.desenfileira();
        cout << p->getInfo() << " ";
        if(p->getEsq() != NULL)
            f.enfileira(p->getEsq());
        if(p->getDir() != NULL)
            f.enfileira(p->getDir());
    }
    cout << endl;
}

bool ArvBin::busca(int val)
{
    return auxBusca(raiz, val);
}

bool ArvBin::auxBusca(NoArv *p, int val)
{
    if(p != NULL)
    {
        if(p->getInfo() == val)
            return true;
        if(auxBusca(p->getEsq(), val))
            return true;
        if(auxBusca(p->getDir(), val))
            return true;
    }
    return false;
}

int ArvBin::altura()
{
    return auxAltura(raiz);
}

int ArvBin::auxAltura(NoArv *p)
{
    if(p == NULL)
        return -1;
    int he = auxAltura(p->getEsq());
    int hd = auxAltura(p->getDir());
    return (he > hd ? he+1 : hd+1);
}

int ArvBin::contaNos()
{
    return auxContaNos(raiz);
}

int ArvBin::auxContaNos(NoArv *p)
{
    if(p != NULL)
        return 1 + auxContaNos(p->getEsq()) + auxContaNos(p->getDir());
    return 0;
}

int ArvBin::contaNos2()
{
    int cont = 0;
    auxContaNos2(raiz, &cont);
    return cont;
}

void ArvBin::auxContaNos2(NoArv *p, int *cont)
{
    if(p != NULL)
    {
        auxContaNos2(p->getEsq(), cont);
        auxContaNos2(p->getDir(), cont);
        *cont += 1;
    }
}


int ArvBin::somaNos()
{
    return auxSomaNos(raiz);
}

int ArvBin::auxSomaNos(NoArv *p)
{
    if(p != NULL)
        return p->getInfo() + auxSomaNos(p->getEsq()) + auxSomaNos(p->getDir());
    return 0;
}

float ArvBin::mediaNos()
{
    return (float)auxSomaNos(raiz)/auxContaNos(raiz);
}

float ArvBin::mediaNos2()
{
    int soma = 0, cont = 0;
    auxMediaNos2(raiz, &soma, &cont);
    return (float)soma/cont;
}

void ArvBin::auxMediaNos2(NoArv *p, int *soma, int *cont)
{
    if(p != NULL)
    {
        *soma += p->getInfo();
        *cont += 1;
        auxMediaNos2(p->getEsq(), soma, cont);
        auxMediaNos2(p->getDir(), soma, cont);
    }
}
