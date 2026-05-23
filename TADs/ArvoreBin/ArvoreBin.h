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
        int auxSoma(NoArv *p);
        void auxMedia(NoArv *p, int *nos, int *soma);
        float auxMedia2(NoArv *p);
    public:
        ArvBin();
        ~ArvBin();
        void cria(int val, ArvBin *sae, ArvBin *sad);
        void imprime();
        int impares();
        int soma();
        float media();
        float media2();
};


#endif // ARVOREBIN_H_INCLUDED
