#include <bits/stdc++.h>
using namespace std;

void trianguloretangulo(int i, int j , int k){

    if((i > 0 && j > 0 && k > 0) && (pow(k,2) == pow(j,2) + pow(i,2))){

        cout << "Triangulo retangulo!" << endl;

    }else{

        cout <<"Não é triangulo retangulo" << endl;
        
    }
}

int main(){
    int i,j,k; cin >> i >> j >> k;
    trianguloretangulo(i,j,k);
    return 0;
}
