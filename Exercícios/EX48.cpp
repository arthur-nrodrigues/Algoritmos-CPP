#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    int horas, km; cin >> horas >> km;
    float res;

    res = (float)(horas*km)/12;
    
    cout << fixed << setprecision(3);
    cout << res << endl;

    return 0;
} 