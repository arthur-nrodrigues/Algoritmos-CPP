#include <iostream>
#include <iomanip>  // necessário para setprecision
using namespace std;

int main() {
    double numero = 3.1415926535;

    cout << fixed << setprecision(2);
    cout << "Número com 2 casas decimais: " << numero << endl;

    return 0;
}
