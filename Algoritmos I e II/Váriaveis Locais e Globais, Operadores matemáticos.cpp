#include <iostream> 
using namespace std;

int n1,n2; //Variáveis Globais que estão setadas para qualquer função do meu programa

int main(){ 
    
    //Operadores matemáticos: + - / * % ()

    int n3,n4; //Variáveis locais que estão setadas dentro da função main
    int resultado1,resultado2; //Guarda o valor RESULTADOR

    n1=11;n2=5;n3=2;n4=3; //Variáveis setadas

    resultado1 = n1/n2;
    resultado2 =n1%n2;
    cout << "A divisão é igual a: " << resultado1 << endl;
    cout << "O resto da divisão é igual a: " << resultado2 << endl;

    
    system ("pause");
    return 0;
}
