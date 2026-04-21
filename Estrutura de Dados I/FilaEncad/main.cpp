#include <iostream>
#include "FilaEncad.h"

using namespace std;

int main()
{
    FilaEncad f;
    f.enfileira(1);
    f.imprime();
    f.enfileira(2);
    f.imprime();
    f.enfileira(3);
    f.imprime();
    cout << "Removeu " << f.desenfileira() << endl;
    f.imprime();
    f.enfileira(4);
    f.imprime();
    f.enfileira(5);
    f.imprime();
    f.enfileira(6);
    f.imprime();
    f.enfileira(7);
    f.imprime();
    cout << "Removeu " << f.desenfileira() << endl;
    f.imprime();
    cout << "Removeu " << f.desenfileira() << endl;
    f.imprime();
    return 0;
}
