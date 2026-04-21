#include <iostream>
#include <cstdlib>
#include "ListaCont.h"
#include "ListaEncad.h"
#include "ListaDupla.h"

using namespace std;

int main()
{
    /// ************* TESTES QUESTÃO 1 *************** ///
    cout << "==== TESTES QUESTAO 1 ====" << endl << endl;

    ListaCont lc1(10), lc2(10), lc3(10);

    lc1.insereFinal(3); lc1.insereFinal(3);  lc1.insereFinal(5);  lc1.insereFinal(3);
    lc1.insereFinal(7); lc1.insereFinal(5);  lc1.insereFinal(3);

    lc2.insereFinal(3); lc2.insereFinal(3);  lc2.insereFinal(5);  lc2.insereFinal(3);
    lc2.insereFinal(7); lc2.insereFinal(5);  lc2.insereFinal(3);

    lc3.insereFinal(1); lc3.insereFinal(1);  lc3.insereFinal(1);  lc3.insereFinal(1);
    lc3.insereFinal(1); lc3.insereFinal(1);  lc3.insereFinal(1);

    cout << "Lista 1: "; lc1.imprime();
    cout << "Lista 2: "; lc2.imprime();
    cout << "Lista 3: "; lc3.imprime(); cout << endl;

    cout << "Resultado esperado: [5, 7, 5]" << endl;
    cout << "Resultado obtido:   "; lc1.removeOcorrencias(3); lc1.imprime(); cout << endl;

    cout << "Resultado esperado: [3, 3, 3, 7, 3]" << endl;
    cout << "Resultado obtido:   "; lc2.removeOcorrencias(5); lc2.imprime(); cout << endl;

    cout << "Resultado esperado: [1, 1, 1, 1, 1, 1, 1]" << endl;
    cout << "Resultado obtido:   "; lc3.removeOcorrencias(0); lc3.imprime(); cout << endl;

    cout << endl;

    /// ************* TESTES QUESTÃO 2 *************** ///
    cout << "==== TESTES QUESTAO 2 ====" << endl << endl;

    ListaEncad le1, le2, *le3;

    le1.insereFinal(3); le1.insereFinal(9); le1.insereFinal(-4); le1.insereFinal(8);
    le2.insereFinal(-7); le2.insereFinal(2);

    cout << "Lista 1: "; le1.imprime();
    cout << "Lista 2: "; le2.imprime(); cout << endl;

    cout << "Resultado esperado: [3, -7, 9, 2, -4, 8]" << endl;
    cout << "Resultado obtido:   "; le3 = le1.intercala(&le2); if(le3) le3->imprime(); cout << endl;
    delete le3;

    cout << "Resultado esperado: [-7, 3, 2, 9, -4, 8]" << endl;
    cout << "Resultado obtido:   "; le3 = le2.intercala(&le1); if(le3) le3->imprime(); cout << endl;
    delete le3;

    cout << endl;

    /// ************* TESTES QUESTÃO 3 *************** ///
    cout << "==== TESTES QUESTAO 3 ====" << endl << endl;

    ListaDupla ld1, ld2, ld3;

    ld1.insereFinal(3); ld1.insereFinal(2); ld1.insereFinal(1); ld1.insereFinal(2);

    ld2.insereFinal(3); ld2.insereFinal(3); ld2.insereFinal(3); ld2.insereFinal(3);
    ld2.insereFinal(3); ld2.insereFinal(3);

    ld3.insereFinal(1); ld3.insereFinal(1); ld3.insereFinal(1); ld3.insereFinal(1);
    ld3.insereFinal(1); ld3.insereFinal(1);

    cout<<"Lista 1: " ; ld1.imprime();
    cout<<"Lista 2: " ; ld2.imprime();
    cout<<"Lista 3: " ; ld3.imprime(); cout << endl;

    cout << "Resultado esperado: [3, 10, 2, 1, 10, 2]" << endl;
    cout << "Resultado obtido:   "; ld1.insereAntes(2, 10); ld1.imprime(); cout << endl;

    cout << "Resultado esperado: [1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3]" << endl;
    cout << "Resultado obtido:   "; ld2.insereAntes(3, 1); ld2.imprime(); cout << endl;

    cout << "Resultado esperado: [1, 1, 1, 1, 1, 1]" << endl;
    cout << "Resultado obtido:   "; ld3.insereAntes(2, 3); ld3.imprime(); cout << endl;

    return 0;
}
