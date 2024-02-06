#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    std::vector<char> uniqueLetters;

    for (int i = 0; i < s.length(); ++i) {
        if (isalpha(s[i])) {
            char c = tolower(s[i]);

            
            bool found = false;
            for (size_t j = 0; j < uniqueLetters.size(); ++j) {
                if (uniqueLetters[j] == c) {
                    found = true;
                    break;
                }
            }

            // If not found, add it to the vector
            if (!found) {
                uniqueLetters.push_back(c);
            }
        }
    }

    sort(uniqueLetters.begin(), uniqueLetters.end());

    cout << uniqueLetters.size() << endl;

    for (int i = 0; i < uniqueLetters.size(); ++i) {
        cout << uniqueLetters[i] << ' ';
    }

    return 0;
}