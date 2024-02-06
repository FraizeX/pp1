#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;

    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> merged(n + m);

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            merged[k] = a[i];
            i++;
        } else {
            merged[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        merged[k] = a[i];
        i++;
        k++;
    }

    while (j < m) {
        merged[k] = b[j];
        j++;
        k++;
    }

    for (int x = 0; x < n + m; x++) {
        cout << merged[x] << " ";
    }
    cout << endl;

    return 0;
}