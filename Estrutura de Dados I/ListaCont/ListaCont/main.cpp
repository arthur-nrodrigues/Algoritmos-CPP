#include <iostream>
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont l(10);
    l.removeFinal();
    l.removeInicio();
    l.insereK(0, 10);
    l.imprime();
    l.insereInicio2(1234);
    l.imprime();
    l.insereFinal(1);
    l.imprime();
    l.insereFinal(2);
    l.imprime();
    l.insereFinal(3);
    l.imprime();
    cout << "No 2: " << l.get(2) << endl;
    l.set(2, 100);
    cout << "No 2: " << l.get(2) << endl;
    l.imprime();
    l.insereFinal(4);
    l.imprime();
    l.removeFinal();
    l.imprime();
    l.set(5, 100);
    l.insereInicio(4);
    l.imprime();
    l.insereInicio(5);
    l.imprime();
    l.insereInicio(6);
    l.imprime();
    l.insereInicio(7);
    l.imprime();
    l.insereInicio(8);
    l.imprime();
    l.insereInicio(9);
    l.imprime();
    l.insereInicio(10);
    l.imprime();
    l.insereInicio(11);
    l.imprime();
    cout << "No 5: " << l.get(5) << endl;
    l.removeInicio();
    l.imprime();
    l.insereK(0, 4000);
    l.imprime();
    l.insereK(7, 777);
    l.imprime();
    l.removeK(0);
    l.imprime();
    l.removeK(6);
    l.imprime();
    l.removeInicio2();
    l.imprime();
    l.insereInicio2(1234);
    l.imprime();
    l.insereFinal(999);
    l.imprime();
    l.insereFinal(998);
    l.imprime();
    l.insereInicio(997);
    l.imprime();
    l.insereFinal(996);
    l.imprime();
    l.insereK(1, 77777);
    l.imprime();

    ListaCont l2(10);
    l2.insereFinal(1000);
    l2.insereFinal(1001);
    l2.insereFinal(1002);
    l2.insereFinal(1003);
    l2.insereFinal(1004);
    l2.insereFinal(1005);
    l2.insereFinal(1006);
    l2.imprime();

    l.concatena(&l2);
    l.imprime();
    l2.imprime();

    ListaCont *l3 = l.concatenaNova(&l2);
    l.imprime();
    l2.imprime();
    l3->imprime();
    delete l3;

    return 0;
}
