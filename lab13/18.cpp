#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float t, g;
    cin >> t >> g;
    float ans = (g * 100) / t;
    cout << setprecision(6) << ans;
    return 0;
}