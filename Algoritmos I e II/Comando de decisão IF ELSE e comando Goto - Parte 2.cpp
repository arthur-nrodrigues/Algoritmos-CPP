#include <iostream>
using namespace std;

int main(){
    
    int n1,n2,resultado;
    char opc;

    cout << "Bem-vindo ao verificador de aprovacao" << endl;

    inicio:

    system ("cls");

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;
    
    resultado=n1+n2;

    /*
        Nota maior que 60 APROVADO
        Nota menor que 60 e maior que 40 RECUPERAÇÃO
        Nota menor que 40 REPROVADO   
    */

    if(resultado >= 60){
        cout << "Sua nota foi " << resultado << ". Parabens! Voce foi APROVADO!" << endl;
    }else if (resultado >= 40) {
        cout << "Sua nota foi " << resultado << ". Voce esta de RECUPERACAO!" << endl;
    }else {
        cout << "Sua nota foi " << resultado << ". Voce esta REPROVADO!" << endl;
    }

    inicio1:

    cout <<"Deseja verificar mais notas? [s/n]: ";
    cin >> opc;

    if (opc == 's' or opc == 'S') {
        goto inicio;
    }else if (opc == 'n' or opc == 'N'){
        return 0;
    }else {
        cout << "Inválido! ";
        goto inicio1;
    }



    system("pause");
    return 0;
}