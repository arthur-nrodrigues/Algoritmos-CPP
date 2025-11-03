#include <bits/stdc++.h>
using namespace std;

void somaimpares(int valor){
    int soma = 0;
    if(valor > 0 ){
        for(int i = 1;i <= valor; i = i + 2){
            soma = soma + i;
                
        }
        cout << soma << endl;
    }else{
        cout << "Valor inadequado!" << endl;
    }
return;
}

int main(){
    int nimpar; cin >> nimpar;
    somaimpares(nimpar);
    return 0;
}