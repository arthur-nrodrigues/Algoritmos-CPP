#include <iostream>
using namespace std;

int main(){

    int n1=0;

    while(n1<1000){
        cout << n1 << " ";
        n1 = n1 + 1;
        if(n1 == 501){
            break;
        }
    }

    system ("pause");
    return 0;
}