#include <bits/stdc++.h>
using namespace std;

int main(){

    /* Um ponteiro é uma varíavel que armazena o endereço de outra variável, usamos o operador '*' 
    (conteudo de) para inicializar um ponteiro e utilizamos o operador '&' (endereço de) para
    armazenar o endereço da variável no ponteiro;*/

    int num = 1000; //Inicialização de uma variável qualquer;
    int *pt = &num; //Inicialização do ponteiro 'pt' e atribuição do endereço de memória de 'num';
    *pt = 2; //Modificando o valor de num através do endereço da memória;
    cout << "Endereco da memoria de num: "<< pt << endl;
    cout << "Valor de num: " << *pt << endl;
    //Utilizando o ponteiro para manipular num;

    //------------

    int numero = 10;
    int *pt_num = &numero;
    cout << pt_num << endl;
    cout << numero << endl;
    pt_num++;
    cout << pt_num << endl;
    cout << numero << endl;
    


    return 0;
}