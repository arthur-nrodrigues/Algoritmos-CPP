#ifndef FILAENCAD_H_INCLUDED
#define FILAENCAD_H_INCLUDED
#include "No.h"

class FilaEncad
{
  public:
    FilaEncad();
    ~FilaEncad();
    int getInicio();
    void enfileira(int val);
    int desenfileira();
    bool vazia();
    void imprime(); // SOMENTE PARA TESTES

  private:
    No *inicio;
    No *fim;
};

#endif // FILAENCAD_H_INCLUDED
