#include <iostream>
#include "FilaCont.h"

using namespace std;

int main()
{
    FilaCont f(10);
    f.enfileira(1);
    f.imprime();
    f.enfileira(2);
    f.imprime();
    f.enfileira(3);
    f.imprime();
    f.enfileira(4);
    f.imprime();
    cout << "Removeu " << f.desenfileira() << endl;
    f.imprime();
    cout << "Removeu " << f.desenfileira() << endl;
    f.imprime();
    f.enfileira(999);
    f.imprime();
    f.enfileira(998);
    f.imprime();
    f.enfileira(996);
    f.imprime();
    cout << "Removeu " << f.desenfileira() << endl;
    f.imprime();
    cout << "Removeu " << f.desenfileira() << endl;
    f.imprime();
    cout << "Removeu " << f.desenfileira() << endl;
    f.imprime();
    f.enfileira(91);
    f.imprime();
    f.enfileira(92);
    f.imprime();
    f.enfileira(93);
    f.imprime();
    f.enfileira(94);
    f.imprime();
    return 0;
}
