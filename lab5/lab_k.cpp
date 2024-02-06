#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& s) {
    int vowelCount = 0;

    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    string s;
    cin >> s;

    int vowels = countVowels(s);

    cout << vowels << endl;

    return 0;
}