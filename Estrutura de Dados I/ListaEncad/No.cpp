#include "No.h"

No::No(int val, No *p)
{
    setInfo(val); //info = val;
    setProx(p); //prox = p;
}

No::No()
{
    //vazio
}

No::~No()
{
    //vazio
}

int No::getInfo()
{
    return info;
}

No* No::getProx()
{
    return prox;
}

void No::setInfo(int val)
{
    info = val;
}

void No::setProx(No *p)
{
    prox = p;
}
