#include <iostream>
#include "PilhaEncad.h"
#include "FilaEncad.h"

using namespace std;

void inverte(FilaEncad *f)
{
    PilhaEncad p;
    while(!f->vazia())
        p.empilha(f->desenfileira());
    while(!p.vazia())
        f->enfileira(p.desempilha());
}

void intToBin(int n)
{

}

bool ehPalindromo(PilhaEncad *p)
{
    PilhaEncad aux, aux2, aux3;
    bool res = true;
    while(!p->vazia())
    {
        aux.empilha(p->getTopo());
        aux2.empilha(p->desempilha());
    }
    while(!aux2.vazia())
        aux3.empilha(aux2.desempilha());
    while(!aux.vazia())
    {
        if(aux.getTopo() != aux3.desempilha())
            res = false;
        p->empilha(aux.desempilha());
    }
    return res;
}

FilaEncad* reorganiza(FilaEncad *f)
{
    FilaEncad *prioritaria = new FilaEncad();
    if(!f->vazia())
    {
        int primeiro = f->desenfileira();
        int anterior = primeiro;
        f->enfileira(primeiro);
        while(f->getInicio() != primeiro)
        {
            int val = f->getInicio();
            if(val > 70 && anterior > 70)
                prioritaria->enfileira(f->desenfileira());
            else
                f->enfileira(f->desenfileira());
            anterior = val;
        }
    }
    return prioritaria;
}

int main()
{
    FilaEncad f;
    f.enfileira(1);
    f.enfileira(2);
    f.enfileira(3);
    f.enfileira(4);
    f.enfileira(5);
    f.imprime();
    inverte(&f);
    f.imprime();

    intToBin(42);

    PilhaEncad p;
    p.empilha(1);
    p.empilha(2);
    p.empilha(3);
    p.empilha(2);
    p.empilha(1);
    p.imprime();
    cout << ehPalindromo(&p) << endl;
    p.imprime();

    FilaEncad f2;
    f2.enfileira(15);
    f2.enfileira(85);
    f2.enfileira(71);
    f2.enfileira(75);
    f2.enfileira(62);
    f2.enfileira(70);
    f2.enfileira(30);
    f2.enfileira(92);
    f2.enfileira(100);
    f2.enfileira(54);
    f2.imprime();
    FilaEncad *f3 = reorganiza(&f2);
    f2.imprime();
    f3->imprime();
    delete f3;
    return 0;
}
