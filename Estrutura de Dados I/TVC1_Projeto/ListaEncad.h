#ifndef LISTAORDENCAD_H_INCLUDED
#define LISTAORDENCAD_H_INCLUDED

#include "No.h"

class ListaEncad
{
  public:
    ListaEncad();
    ~ListaEncad();
    void insereFinal(int val);
    void imprime();
    ListaEncad* intercala(ListaEncad *l2);
  private:
    No *primeiro;
    No *ultimo;
    int n;
};

#endif
