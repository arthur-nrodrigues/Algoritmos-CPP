#include <iostream>
using namespace std;

int main(){

    int i;
    int vetor[5]; //Criando um vetor/aray com 5 posições diferentes//Semelhante int vetor0,vetor1,vetor2,...,vetor4.

    vetor[0]=10;
    vetor[1]=20;
    vetor[2]=30;   // Array / Vetor
    vetor[3]=40;
    vetor[4]=50;

    for (i=0; i<5; i++){
        cout << vetor[i] << endl;
    }

    int i2;
    int valores[5]={1,2,3,4,5};
                                        //Forma compacta.
    for (i2=0; i2<5; i2++){
        cout << valores[i2] << endl;
    }

    int loop=0, i3=0; 
    int numeros[5]={1,2,3,4,5};

    while(loop<5){
        cout << numeros[i3] << endl;
        i3++;
        loop++;
    }
    
 

    system("pause");
    return 0;
}