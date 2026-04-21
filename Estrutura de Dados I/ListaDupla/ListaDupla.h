#ifndef LISTADUPLA_H_INCLUDED
#define LISTADUPLA_H_INCLUDED
#include "NoDuplo.h"

class ListaDupla
{
  public:
    ListaDupla();
    ~ListaDupla();
    bool busca(int val);
    void insereInicio(int val);
    void removeInicio();
    void insereFinal(int val);
    void removeFinal();
    void imprime();
    void imprimeReverso();
    void concatena(ListaDupla *l2);
    ListaDupla* concatenaNova(ListaDupla *l2);

  private:
    NoDuplo *primeiro;
    int n;
    NoDuplo *ultimo;
};

#endif // LISTADUPLA_H_INCLUDED
