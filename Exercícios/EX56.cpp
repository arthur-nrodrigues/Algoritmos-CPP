#include <bits/stdc++.h>
using namespace std;


int f(int n)
{
    int soma = 0;
    for(int i=1; i<=n; ++i)
    soma = soma + 1;
    return soma;
}
int g(int n)
{
    int soma = 0;
    for(int i=1; i<=n; ++i)
    soma = soma + i + f(i);
    return soma;
}

int main(){

    int n; cin >> n;
    cout << g(n);
    

    return 0;
}
