#ifndef ARVBINBUSCA_H_INCLUDED
#define ARVBINBUSCA_H_INCLUDED
#include "NoArv.h"

class ArvBinBusca
{
  private:
    NoArv *raiz;
    void libera(NoArv *p);
    void auxImprime(NoArv *p, int nivel);
    bool auxBusca(NoArv *p, int val);
    NoArv* auxInsere(NoArv *p, int val);
    NoArv* auxRemove(NoArv *p, int val);
    int auxAltura(NoArv *p);
    int auxContaNos(NoArv *p);
    int auxBalanceada(NoArv *p, int *cont);
    void auxImprimeNivel(NoArv *p, int nivel, int k);
    void auxImprimeAteNivel(NoArv *p, int nivel, int k);
    void auxImprimeIntervalo(NoArv *p, int a, int b);
  public:
    ArvBinBusca();
    ~ArvBinBusca();
    int getRaiz();
    bool vazia();
    void imprime();
    bool busca(int val);
    bool busca2(int val);
    void insere(int val);
    void insere2(int val);
    void remove(int val);
    int menor();
    void removeMenor();
    int somaCaminho(int val);
    int altura();
    int contaNos();
    bool balanceada();
    void imprimeNivel(int k);
    void imprimeAteNivel(int k);
    void imprimeIntervalo(int a, int b);
};

#endif // ARVBINBUSCA_H_INCLUDED
