#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> digitCount; // Initialize a map to count the digits

    for (size_t i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (isdigit(c)) {
            digitCount[c]++;
        }
    }

    bool equalCounts = true;

    for (map<char, int> ::iterator it = digitCount.begin(); it != digitCount.end(); ++it) {
        if (it->second != digitCount.begin()->second) {
            equalCounts = false;
            break;
        }
    }

    if (equalCounts) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}