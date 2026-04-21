#include <iostream>
using namespace std;

#define pi 3.1415 //Definindo um  constante

int main()
{
    string nome;

    cout << "O valor de pi é: " << pi << endl; //Imprimindo a constante

    cout << "Escreva seu nome:"; //Solicitando ao usuário que escreva seu nome
    cin >> nome; //Armazenando o nome na variável 

    cout << "bem vindo," << nome << "!" << endl; //Imprimindo o novo valor da variável

    system("pause");
    return 0;
}