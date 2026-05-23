#ifndef ARVOREBIN_H_INCLUDED
#define ARVOREBIN_H_INCLUDED
#include "NoArv.h"

class ArvBin
{
    private:
        NoArv *raiz;
        void libera(NoArv *p);
        void auxImprime(NoArv *p);
        int auxImpares(NoArv *p);
        int auxSomaNos(NoArv *p);
        int auxContaNos(NoArv *p);
        int auxMaior(NoArv *p);
        int auxMaiores(NoArv *p, int val);
    public:
        ArvBin();
        ~ArvBin();
        void cria(int val, ArvBin *sae, ArvBin *sad);
        void imprime();
        int impares();
        int soma();
        int contaNos();
        float media();
        int maior();
        int maiores(int val);
};


#endif // ARVOREBIN_H_INCLUDED
