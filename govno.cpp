#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> firstOccurrence;

    for (int i = 1; i <= n; ++i) {
        string s;
        cin >> s;

        // If the string is not in the map, add it
        if (firstOccurrence.find(s) == firstOccurrence.end()) {
            firstOccurrence[s] = i;
        }
    }

    // Print the first occurrence of each string in lexicographical order
    for (map<string, int>::iterator it = firstOccurrence.begin(); it != firstOccurrence.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}