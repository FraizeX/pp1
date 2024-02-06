#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string s;
    cin >> s; // Input the string

    bool possible = false;

    for (char c = 'a'; c <= 'z'; c++) {
        string newStr = s + c;
        if (isPalindrome(newStr)) {
            possible = true;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << endl;

    return 0;
}