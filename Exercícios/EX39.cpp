#include <iostream>

/// NOME:
/// MATRÍCULA:

using namespace std;

// ----------------------------------------------------------------------------
//Q1
void q1()
{
    // Implemente aqui sua solucao!
}
//-Q1
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q2
int* positivoNegativo(int vet[], int n, float *m, int *z)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.
    return NULL;
}
//-Q2
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q3

int auxContaDigito(int num, int tamanho, int dig){
    if(tamanho == 1){
        if(num == dig){
            return 1;
        }else{
            return 0;
        }
    }
    
    if((num % 10) == dig){
        return 1;
    }
    
    return auxContaDigito(num/10,tamanho-1,dig);
}

int contaDigito(int numero, int digito){
    int cont = 0;
    int aux = numero;
    while(aux != 0){
        aux = aux/10;
        cont++;
    }

    return auxContaDigito(numero,cont,digito);
}
//-Q3
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q4
int indiceMenor(int vet[], int n)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.
    return 0;
}
//-Q4
// ----------------------------------------------------------------------------


int main()
{
    // TESTES PARA A QUESTAO 1 ------------------------------------------------
    cout << "TESTES PARA A QUESTAO 1" << endl;
    cout << "Resultado esperado: 10 9 8 7 6 200 4 3 2 100" << endl;
    cout << "Resultado obtido:   ";
    q1();
    cout << endl << endl;
    // ------------------------------------------------------------------------

    // TESTES PARA A QUESTAO 2 ------------------------------------------------
    cout << "TESTES PARA A QUESTAO 2" << endl;
    int *r, z;
    float m;
    cout << "Resultado esperado: m = 20 / vetor = -5 -50 -12" << endl;
    cout << "Resultado obtido:   ";
    int v21[] = {12, 10, -5, 0, -50, 34, -12, 8, 42, 14};
    r = positivoNegativo(v21, 10, &m, &z);
    cout << "m = " << m << " / vetor = ";
    if(r)
    {
        for(int i = 0; i < z; i++)
            cout << r[i] << " ";
        delete [] r;
    }
    cout << endl;

    cout << "Resultado esperado: m = 13.5 / vetor = " << endl;
    cout << "Resultado obtido:   ";
    int v22[] = {3, 1, 25, 12, 19, 21};
    r = positivoNegativo(v22, 6, &m, &z);
    cout << "m = " << m << " / vetor = ";
    if(r)
    {
        for(int i = 0; i < z; i++)
            cout << r[i] << " ";
        delete [] r;
    }
    cout << endl;

    cout << "Resultado esperado: m = 0 / vetor = -1 -2 -3" << endl;
    cout << "Resultado obtido:   ";
    int v23[] = {0, -1, -2, -3};
    r = positivoNegativo(v23, 4, &m, &z);
    cout << "m = " << m << " / vetor = ";
    if(r)
    {
        for(int i = 0; i < z; i++)
            cout << r[i] << " ";
        delete [] r;
    }
    cout << endl;
    cout << endl << endl;
    // ------------------------------------------------------------------------

    // TESTES PARA A QUESTAO 3 ------------------------------------------------
    cout << "TESTES PARA A QUESTAO 3" << endl;
    cout << "Resultado esperado: 1 -- Resultado obtido: " << contaDigito(12345, 2) << endl;
    cout << "Resultado esperado: 5 -- Resultado obtido: " << contaDigito(22222, 2) << endl;
    cout << "Resultado esperado: 2 -- Resultado obtido: " << contaDigito(34523, 3) << endl;
    cout << "Resultado esperado: 3 -- Resultado obtido: " << contaDigito(44450, 4) << endl;
    cout << "Resultado esperado: 0 -- Resultado obtido: " << contaDigito(12345, 6) << endl;
    cout << endl << endl;
    // ------------------------------------------------------------------------

    // TESTES PARA A QUESTAO 4 ------------------------------------------------
    cout << "TESTES PARA A QUESTAO 4" << endl;
    int v41[] = {12, 1, 3, 4, 1, 2};
    cout << "Resultado esperado: 1 -- Resultado obtido: " << indiceMenor(v41, 6) << endl;

    int v42[] = {-1, 5, 9, 0, 8, 12, 18};
    cout << "Resultado esperado: 0 -- Resultado obtido: " << indiceMenor(v42, 7) << endl;

    int v43[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1};
    cout << "Resultado esperado: 10 -- Resultado obtido: " << indiceMenor(v43, 11) << endl;
    cout << endl << endl;
    // ------------------------------------------------------------------------

    return 0;
}
