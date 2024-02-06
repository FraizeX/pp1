#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

string isprime(int n){
    for(int i = 2; i < n; ++i){
        if(n % i == 0){
            return "No";
            break;
        }
    }
    return "Yes";
}

int main(){
    int n;
    cin >> n;
    string ans = isprime(n);
    cout << ans;
    return 0;
}