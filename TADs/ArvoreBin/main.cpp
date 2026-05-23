#include <iostream>
using namespace std;
#include "ArvoreBin.h"

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

    arv.imprime();
    cout << endl;
    cout << "Num de impares = " << arv.impares() << endl;
    cout << "Soma dos nos = " << arv.soma() << endl;
    cout << "Media = " << arv.media() << endl;
    cout << "Media = " << arv.media2() << endl;

    return 0;
}
