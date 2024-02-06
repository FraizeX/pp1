#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a, a + n); 
    sort(b, b + n);

    int equalCount = 0;
    int i = 0, j = 0;

    while (i < n && j < n) {
        if (a[i] == b[j]) {
            equalCount++;
            i++;
            j++;
        } 
        else if (a[i] < b[j]) {
            i++;
        } 
        else {
            j++;
        }
    }

    cout << equalCount << endl;

    return 0;
}