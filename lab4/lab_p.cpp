#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][n - i - 1];
    }

    cout << sum << endl;

    return 0;
}