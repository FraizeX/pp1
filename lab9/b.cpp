#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(long long i = (n - 1); i > -1; i--){
        if(a[i] % 2 == 0){
            cout << a[i] << " ";
        }
    }

    for(long long i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            cout << a[i] << " ";
        }
    }
    return 0;
}