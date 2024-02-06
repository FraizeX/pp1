#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() { 
    string s;
    cin >> s;
    string t = s;

    reverse(s.begin(), s.end());

    bool palindrome = true;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i]) {
            palindrome = true;
        }
        else {
            palindrome = false;
        }
    }

    if(palindrome) {
        cout << "Yes\n";
    } 
    else { 
        cout << "No\n";
    }
     

}