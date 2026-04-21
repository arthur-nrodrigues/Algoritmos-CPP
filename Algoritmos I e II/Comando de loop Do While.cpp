#include <iostream>
using namespace std;

int main(){

    int numero;

    do{
        cout << "Digite um numero mair que zero: ";
        cin >> numero;
        
    } while (numero <= 0);
    cout << "Seu numero e:" << numero << endl;
    

    system ("pause");
    return 0;
}