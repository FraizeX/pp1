#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int max = 0;
    for(int i = 0; i < s.size(); i++) {
        if(max < s[i] - '0') {
            max = s[i] - '0';
        }
    }

    cout << max << endl;
}