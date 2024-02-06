#include <iostream>
#include <string>

using namespace std;

bool isvalid(long long n){
    while(n > 0){
        int digit = n % 10;
        if(digit % 2 != 0){
            return false;
        }
        n /= 10;
    }
    return true;
}

int main(){
    long long n;
    cin >> n;
    if(isvalid(n)){
        cout << "Valid" << endl;
    }
    else{
        cout << "Not valid" << endl;
    }
    return 0;

}