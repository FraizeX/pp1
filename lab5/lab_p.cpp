#include <iostream>
#include <string>
using namespace std;

string shiftAlphabetCharacters(const string& s) {
    string result = s;

    for (size_t i = 0; i < result.length(); ++i) {
        if (result[i] == 'z') {
            result[i] = 'a';
        } else if (result[i] >= 'a' && result[i] < 'z') {
            result[i]++;
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    string shiftedString = shiftAlphabetCharacters(s);

    cout << shiftedString << endl;

    return 0;
}