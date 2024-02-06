#include <iostream>
using namespace std;

bool isCheater(int arr[], int k, int index, int n) {
    if(index >= n-1) return false;
    
    if (arr[index + 1] - arr[index] <= k ) return true;
    
    return isCheater(arr, k, index+1, n);
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(isCheater(arr, k, 0, n)) {
        cout << "cheater\n";
    } else {
        cout << "no\n";
    }

    return 0;
}