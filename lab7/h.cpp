#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int fib[40];
    fib[0] = 0;
    fib[1] = 1;
    
    for(int i = 1; i <= 40; i++) {
        
        fib[i+1] = fib[i-1] + fib[i];
    }

    
    cout << fib[n-1] << endl;
    

}