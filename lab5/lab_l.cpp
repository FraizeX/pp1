#include <iostream>
#include <string>
using namespace std;

bool isIncreasingAlphabeticalOrder(const string& s) {
    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i] < s[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    cout << (isIncreasingAlphabeticalOrder(s) ? "YES" : "NO") << endl;

    return 0;
}