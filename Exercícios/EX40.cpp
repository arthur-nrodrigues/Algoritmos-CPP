#include <bits/stdc++.h>
using namespace std;

int main(){

    int cont = 0;
    int num; cin >> num;
    while(num != 0){
        num = num/10;
        cont++;
    }
    cout << cont << endl;


    return 0;
}