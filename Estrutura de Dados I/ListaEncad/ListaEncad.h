#ifndef LISTAENCAD_H_INCLUDED
#define LISTAENCAD_H_INCLUDED
#include "No.h"

class ListaEncad
{
  public:
    ListaEncad();
    ~ListaEncad();
    int get(int k);
    void set(int k, int val);
    void insereInicio(int val);
    void removeInicio();
    void insereFinal(int val);
    void removeFinal();
    void insereK(int k, int val);
    void removeK(int k);
    void imprime();
    int getComprimento();
    int contaMaiores(int val);

  private:
    No *primeiro;
};

#endif // LISTAENCAD_H_INCLUDED
