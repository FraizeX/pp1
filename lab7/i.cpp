#include <iostream>
using namespace std;

int main() {

    int n = 0;
    int arr[10000000] = {0};
    for(int i = 0; i < 10000000; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            n = i;
            break;
        }        
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum+=arr[i];
    }

    cout << sum << endl;
}