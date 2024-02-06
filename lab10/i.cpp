#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> reversedSequence(n);

    for (int i = 0; i < n; ++i) {
        cin >> reversedSequence[i];
    }

    for (int i = 0; i < n; ++i) {
        int originalPlace = n - i;
        if (reversedSequence[i] == originalPlace) {
            cout << "OK" << endl;
        } else {
            cout << "Instead of " << reversedSequence[i] << " here was " << originalPlace << endl;
        }
    }

    return 0;
}