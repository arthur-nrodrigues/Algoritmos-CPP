#ifndef FILAENCAD_H_INCLUDED
#define FILAENCAD_H_INCLUDED
#include "No.h"

class FilaEncad
{
  public:
    FilaEncad();
    ~FilaEncad();
    NoArv* getInicio();
    void enfileira(NoArv* val);
    NoArv* desenfileira();
    bool vazia();

  private:
    No *inicio;
    No *fim;
};

#endif // FILAENCAD_H_INCLUDED
