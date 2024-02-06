#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;
    int len = N.size();

    int sumEven = 0; 
    int sumOdd = 0;  

    for (int i = 0; i < len; i++) {
        int digit = N[i] - '0';

        if (i % 2 == 0) {
            sumEven += digit;
        } 
        else {
            sumOdd += digit;
        }
    }

    if (sumEven == sumOdd) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}