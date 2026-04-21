#include <bits/stdc++.h>
using namespace std;

int main(){

    /*Alocação Dinâmica de Memória permite criar um local na memória de tamanho arbitrário e acessa-lós
    por ponteiros, ou seja:
    Criar um espaço na memória e usar um ponteiro para acessa-lá.
    new TipoDeDado
    new TipoDeDado[].
    E usar delete para liberar esse espaço:
    delete ponteiro
    delete []ponteiro.
    */

    int *pt = new int;
    *pt = 10;   
    cout << "Conteudo armazenado na memoria dinamica: " << *pt << endl;
    cout << "Enredeco da memoria dinamica: " << &pt << endl;
    delete pt;

    return 0;
}