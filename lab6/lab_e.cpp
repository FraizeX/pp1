#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

float hypotenuse(const int& a, const int& b){
    float c;
    c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

int main(){
    int a, b;
    cin >> a >> b;
    float c = hypotenuse(a, b);
    cout << setprecision(4) << c;
    return 0;

}