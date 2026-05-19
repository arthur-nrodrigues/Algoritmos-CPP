#ifndef ARVBIN_H_INCLUDED
#define ARVBIN_H_INCLUDED
#include "NoArv.h"
#include "FilaEncad.h"

class ArvBin
{
  private:
    NoArv *raiz;
    void libera(NoArv *p);
    NoArv* auxMontaArvore();
    NoArv* auxInsere(NoArv *p, int val);
    void auxImprime(NoArv *p);
    bool auxBusca(NoArv *p, int val);
    int auxAltura(NoArv *p);
    int auxContaNos(NoArv *p);
    void auxContaNos2(NoArv *p, int *cont);
    int auxSomaNos(NoArv *p);
    void auxMediaNos2(NoArv *p, int *soma, int *cont);
  public:
    ArvBin();
    ~ArvBin();
    bool vazia();
    void anulaRaiz();
    int getRaiz();
    void cria(int val, ArvBin *sae, ArvBin *sad);
    void montaArvore();
    void insere(int val);
    void insere2(int val);
    void imprime();
    void percursoEmLargura();
    bool busca(int val);
    int altura();
    int contaNos();
    int contaNos2();
    int somaNos();
    float mediaNos();
    float mediaNos2();
};

#endif // ARVBIN_H_INCLUDED
