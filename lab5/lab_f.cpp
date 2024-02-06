#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int l, r;
    cin >> s >> l >> r;

    string substring = s.substr(l, r - l + 1);

    cout << substring << endl;

    return 0;
}