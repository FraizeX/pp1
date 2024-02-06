#include <iostream>
#include <cmath>

using namespace std;

float percent(float& n, float& m){
    float x;
    x = (m * 100) / n;
    return x;
}
int main (){
    float n, m;
    cin >> n >> m;
    float x = percent(n, m);
    cout << x;

    return 0;
}