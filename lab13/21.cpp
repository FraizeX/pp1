#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool isprime(int n){
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    int sqrtn = sqrt(n);
    for(int i = 3; i <= sqrtn; i += 2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i = 2; i < n; ++i){
        if(isprime(i)){
            cout << i << " is prime" << endl;
        }
    }
    return 0;
}