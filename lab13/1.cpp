#include <iostream>
#include <vector>

using namespace std;

bool isCool(int n, int m, vector< vector<int> > vec) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if (vec[i][j] == vec[i][j + 1] && 
                vec[i][j] == vec[i + 1][j] &&
                vec[i][j] == vec[i + 1][j + 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector< vector<int> > vec(n, vector<int> (m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> vec[i][j];
        }
    }

    if (isCool(n, m, vec)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}