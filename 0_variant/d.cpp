#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> firstAndLast(const string& str) {
    string sortedStr = str;
    sort(sortedStr.begin(), sortedStr.end());

    vector<string> result;
    
    // Find lexicographically first permutation
    do {
        result.push_back(sortedStr);
    } 
    while (next_permutation(sortedStr.begin(), sortedStr.end()));

    // Find lexicographically last permutation
    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> a = firstAndLast(s);
    cout << s << " " << a[0];
    return 0;
}