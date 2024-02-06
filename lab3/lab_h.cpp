#include <iostream>
using namespace std;
int main() {
    long long n, l, r;
    cin >> n >> l >> r;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long sum = 0;
    for (long long i = l - 1; i <= r - 1; i++) {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}