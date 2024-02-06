#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    int ans = 0;
    int ans2 = 0;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        ans = a[l-1];
        ans2 = a[r-1];
    }

    for(int i = 0; i < n; ++i){
        a[l-1] = ans2;
        a[r-1] = ans;
        cout << a[i] << " ";
    }
    return 0;
}