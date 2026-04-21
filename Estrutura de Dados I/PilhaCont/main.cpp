#include <iostream>
#include "PilhaCont.h"

using namespace std;

int main()
{
    PilhaCont p(10);
    p.empilha(1);
    p.imprime();
    p.empilha(2);
    p.imprime();
    p.empilha(3);
    p.imprime();
    cout << "Removeu " << p.desempilha() << endl;
    p.imprime();
    p.empilha(4);
    p.imprime();
    p.empilha(999);
    p.imprime();
    p.empilha(998);
    p.imprime();
    cout << "Removeu " << p.desempilha() << endl;
    p.imprime();
    p.empilha(996);
    p.imprime();
    return 0;
}
