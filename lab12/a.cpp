#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int k;
    cin >> k;

    int minDistance = abs(k - numbers[0]);
    int result = 0;

    for (int i = 1; i < n; ++i) {
        int distance = abs(k - numbers[i]);
        if (distance < minDistance) {
            minDistance = distance;
            result = i;
        }
    }

    cout << result << endl;

    return 0;
}