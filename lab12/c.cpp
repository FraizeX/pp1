#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    unordered_set<int> uniqueXOR;

    for (int i = 0; i < n; ++i) {
        int xorResult = 0;
        for (int j = i; j < n; ++j) {
            xorResult ^= arr[j];
            uniqueXOR.insert(xorResult);
        }
    }

    bool powerful = false;

    for (int i = 0; i <= 30; ++i) {
        if (uniqueXOR.count(1 << i)) {
            powerful = true;
            break;
        }
    }

    if (powerful) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
