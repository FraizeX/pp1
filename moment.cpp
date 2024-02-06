#include <iostream>
#include <string>

using namespace std;

bool isvalidstring(const string& s, int n) {
    int counter = 0;
    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        if (isdigit(c)) {
            counter++;
            if (counter >= n) {
                return true;
            }
        } 
        else {
            counter = 0;
        }
    }

    return false;
}

int main() {
    string s;
    int n;
    cin >> s >> n;

    if (isvalidstring(s, n)) {
        cout << "Valid" << endl;
    } 
    else {
        cout << "Not valid" << endl;
    }

    return 0;
}