#include <bits/stdc++.h>
using namespace std;

int main(){

    int k = 0;
    int n = 100000;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int o=0;o<n;o++){
                k = k + 1;
            }
        }
    }
    cout << k << endl;


    return 0;
}