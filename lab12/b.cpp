#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int arr[n][m];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    int limit;
    cin >> limit;

    bool penalty = false;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] > limit) {
                penalty = true;
                break;
            }
        }
        if (penalty) {
            break;
        }
    }

    if (penalty) {
        cout << "Penalty!" << endl;
    } else {
        cout << "No penalty for today." << endl;
    }

    return 0;
}