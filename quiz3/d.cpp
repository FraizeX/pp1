#include <iostream>

using namespace std;

void decToHex(int n){
    if(n == 0){
        return;
    }
    int remainder = n % 16;
    if(remainder < 10){
        cout << remainder;
    }
    else{
        cout << char(remainder - 10 + 'A');
    }
    decToHex(n/16);
}

int main(){
    int n;
    cin >> n;
    decToHex(n);
}