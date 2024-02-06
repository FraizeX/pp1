#include<iostream>
using namespace std;

void kinary(int n, int k) {
    if ( n == 0) {
        return;
    }
    
    kinary(n/k, k);

    int remainder = n % k; 
    if(remainder < 10) {
        cout << remainder;
    } else {
        cout << char(remainder-10+'A');
    }

}

int main() {
    int n, k;
    cin >> n >> k;

    if(n==0) {
        cout << "0\n";
    } 
    else {
        kinary(n, k);
        cout << endl;
    } 
}