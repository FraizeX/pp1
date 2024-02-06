#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float hyp(int a, int b){
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main(){
    int a, b;
    cin >> a >> b;
    float c = hyp(a, b);
    cout << setprecision(4) << c;
}