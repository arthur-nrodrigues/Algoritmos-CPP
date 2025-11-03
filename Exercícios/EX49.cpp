#include <bits/stdc++.h>
using namespace std;

void inverteAux(char string[],int i,int f){
    char aux;
    if(i >= f){
        return;
    }else{
        aux = string[i];
        string[i] = string[f];
        string[f] = aux;
        inverteAux(string,i+1,f-1);
    }
}

void inverte(char string[],int n){
    return inverteAux(string,0,n-1);
}

int main(){

    char string[5];
    cin >> string;
    inverte(string,5);
    cout << string << endl;

    return 0;
}