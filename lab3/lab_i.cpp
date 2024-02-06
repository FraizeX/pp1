#include <iostream>
using namespace std;
int main() {
    long long n, l, r;
    long long c=0, b=0;
    cin >> n >> l >> r;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (l-1<r-1){
        swap(a[l-1],a[r-1]);
        l=l+1;
        r=r-1;
    }
    for (long long i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}