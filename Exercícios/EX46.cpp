#include <bits/stdc++.h>
using namespace std;

void troca(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;

}

int main(){

    int x = 10, y = 21;
    cout << "Endereco de x: " << &x << endl;
    cout << "Endereco de y: " << &y << endl;
    troca(x,y);
    int *p;
    cout << "Endereco de p: " << &p << endl;
    p = &x;
    cout << "Endereco de x usando a variavel p: " << p << endl;
    *p = 42;
    p = new int[2];
    p[0] = 2;
    p[1] = 4;
    troca(*p,*(p+1));
    cout << "Valor de p[0]: " << p[0] << endl;
    cout << "Valor de p[1]: " << p[1] << endl;
    delete []p;

    return 0;
}