#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int max = std::max({a, b, c, d});

    cout << max << endl;

    return 0;
}