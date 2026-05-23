#include <iostream>
#include "ArvBinBusca.h"

using namespace std;

int main()
{
    ArvBinBusca a;
    a.insere2(10);
    a.imprime();
    a.insere(13);
    a.imprime();
    a.insere2(8);
    a.imprime();
    a.insere(1);
    a.imprime();
    a.insere2(7);
    a.imprime();
    a.insere(9);
    a.imprime();
    a.insere2(12);
    a.imprime();
    //a.remove(12);
    a.imprime();
    //a.remove(1);
    a.imprime();
    cout << a.balanceada() << endl;
    a.imprimeNivel(2);
    a.imprimeAteNivel(2);
    a.imprimeIntervalo(9, 11);
    cout << "Soma Caminho 7: " << a.somaCaminho(7) << endl;
    cout << "Menor: " << a.menor() << endl;
    a.removeMenor();
    a.imprime();
    a.remove(10);
    a.imprime();
    return 0;
}
