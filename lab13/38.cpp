#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    cin >> k;
    if (n <= k && (2*n)%k==0){
    cout << (2*n)/k+1;
    }
    else if ((2*n)%k!=0){
        cout << (2*n)/k+1;
    }
    else if ((2*n)%k==0){
        cout << (2*n)/k;
    }
    return 0;
}