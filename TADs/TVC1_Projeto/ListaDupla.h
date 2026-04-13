#ifndef LISTADUPLA_H_INCLUDED
#define LISTADUPLA_H_INCLUDED

#include "NoDuplo.h"

class ListaDupla
{
  public:
    ListaDupla();
    ~ListaDupla();
    void insereFinal(int val);
    void imprime();
    void insereAntes(int x, int val);
  private:
    NoDuplo *primeiro;
    NoDuplo *ultimo;
    int n;
};

#endif
