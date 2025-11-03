#include <bits/stdc++.h>
using namespace std;
const float pi = 3.14;

float volumecilindro(float r, float h){
    float volume;
    if ((r > 0 && h > 0) && (r < 2 * h)){
        volume = pi * r * r * h;
        cout << fixed << setprecision(2);
        return volume;
    }
    else{
        return -1;
    }
}
int main(){
    float r, h; cin >> r >> h;        
    cout << volumecilindro(r, h) << endl;
    return 0;
}