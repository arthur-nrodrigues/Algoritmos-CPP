#include <iostream>
#include "ArvBin.h"

using namespace std;

int main()
{
    ArvBin a1, a2, a3, arv, vazia;

    a1.cria(1, &vazia, &vazia);
    a2.cria(2, &vazia, &vazia);
    a1.cria(3, &a1, &a2);

    a2.cria(4, &vazia, &vazia);
    a3.cria(5, &vazia, &vazia);
    a2.cria(6, &a2, &a3);

    arv.cria(7, &a2, &a1);

    a1.anulaRaiz();
    a2.anulaRaiz();
    a3.anulaRaiz();

    arv.imprime();
    arv.percursoEmLargura();
    cout << "Nos:    " << arv.contaNos() << endl;
    cout << "Nos2:   " << arv.contaNos2() << endl;
    cout << "Soma:   " << arv.somaNos() << endl;
    cout << "Media:  " << arv.mediaNos() << endl;
    cout << "Media2: " << arv.mediaNos2() << endl;
    cout << "Altura: " << arv.altura() << endl;

    cout << arv.busca(4) << endl;
    cout << arv.busca(1) << endl;
    cout << arv.busca(10) << endl;

    ArvBin arv2;

    arv2.montaArvore();

    arv2.imprime();
    arv2.percursoEmLargura();
    cout << "Altura: " << arv2.altura() << endl;

    arv.insere(10);
    arv.imprime();
    cout << "Altura: " << arv.altura() << endl;


    return 0;
}
