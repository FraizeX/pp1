#include <iostream>
#include <string>
using namespace std;

int countCharacter(const string& s, char x) {
    int count = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    char x;
    int n;
    cin >> s >> x >> n;

    int charCount = countCharacter(s, x);

    if (charCount == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}