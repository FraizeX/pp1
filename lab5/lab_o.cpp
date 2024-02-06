#include <iostream>
#include <string>
using namespace std;

char findFurthestAlphabetCharacter(const string& s) {
    char maxChar = 'a' - 1; // Initialize maxChar to a character before 'a'

    for (size_t i = 0; i < s.length(); ++i) {
        char c = s[i];
        if (c > maxChar) {
            maxChar = c;
        }
    }

    return maxChar;
}

int main() {
    string s;
    cin >> s;

    char furthestChar = findFurthestAlphabetCharacter(s);

    cout << furthestChar << endl;

    return 0;
}