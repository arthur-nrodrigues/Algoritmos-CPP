#include <bits/stdc++.h>
using namespace std;
const float corretor = 0.0001;

void multa (float vel, float max){
    if(vel <= max + corretor){
        cout << "Nao ha multa a pagar" << endl;
    }else if(vel <= 1.2*max + corretor){
        cout << "velocidade superior a maxima permitida em ate 20%" << endl;
        cout << fixed << setprecision (2);
        cout << "multa a pagar: R$" << (vel-max) * 5.00 << endl;
    }else if(vel <= 1.5*max + corretor){
        cout << "velocidade superior a maxima permitida em mais de 20% ate 50%" << endl;
        cout << fixed << setprecision (2);
        cout << "multa a pagar: R$" << (vel-max) * 20.00 << endl;
    }else{
        cout << "velocidade superior a maxima permitida em mais de 50%" << endl;
        cout << fixed << setprecision (2);
        cout << "multa a pagar: R$" << (vel-max) * 40.00 << endl;
    }
}

int main (){
    float velocidade, maxima;
    cout << "Digite a velocidade maxima permitida: ";
    cin >> maxima;
    cout << "Digite a velocidade: ";
    cin >> velocidade;
    multa (velocidade, maxima);
    return 0; 
}