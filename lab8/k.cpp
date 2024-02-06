#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int k;
    cin >> k;
    int sum = 0;
    sort(a.begin(), a.end());

    for(int i = n - 1; i > (n - k) - 1; i--){
        sum += a[i];
    }

    cout << sum;
    return 0;
}