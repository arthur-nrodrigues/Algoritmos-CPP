#include <iostream>
#include "ListaDupla.h"

using namespace std;

int main()
{
    ListaDupla l;
    l.insereInicio(1);
    l.imprime();
    l.insereInicio(2);
    l.imprime();
    l.insereInicio(3);
    l.imprime();
    l.insereInicio(4);
    l.imprime();
    l.insereInicio(5);
    l.imprime();
    l.imprimeReverso();
    l.removeInicio();
    l.imprime();
    l.removeInicio();
    l.imprime();
    l.removeInicio();
    l.imprime();
    l.insereFinal(100);
    l.imprime();
    l.insereFinal(200);
    l.imprime();
    l.removeFinal();
    l.imprime();
    l.imprimeReverso();

    ListaDupla l2;
    l2.insereFinal(90);
    l2.insereFinal(91);
    l2.insereFinal(92);
    l2.imprime();
    l.concatena(&l2);
    l.imprime();
    l2.imprime();
    l.concatena(&l2);
    l.imprime();
    l2.imprime();
    l2.concatena(&l);
    l.imprime();
    l2.imprime();
    ListaDupla l3;
    l3.concatena(&l);
    l.imprime();
    l3.imprime();

    ListaDupla l4, *l5;
    l4.insereFinal(55);
    l4.insereFinal(56);
    l4.insereFinal(57);
    l4.imprime();

    l5 = l2.concatenaNova(&l4);
    l2.imprime();
    l4.imprime();
    l5->imprime();
    delete l5;

    l5 = l.concatenaNova(&l3);
    l.imprime();
    l3.imprime();
    l5->imprime();
    delete l5;

    return 0;
}
