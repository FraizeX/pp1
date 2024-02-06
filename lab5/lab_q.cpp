#include <iostream>
#include <string>
using namespace std;

bool canObtainByCopying(const string& s, const string& t) {
    string copyS = s;

    while (copyS.length() < t.length()) {
        copyS += s;
    }

    return copyS == t;
}

int main() {
    string s, t;
    cin >> s >> t;

    if (canObtainByCopying(s, t)) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }

    return 0;
}