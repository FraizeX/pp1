#include <iostream>
#include <vector>

using namespace std;

void printBinary(int n) {
    if(n > 1){
        printBinary(n / 2);
    }
    cout << n % 2;
}

int main() {
    int N;
    cin >> N;

    vector<int> vec(N);
    for (int i = 0; i < N; ++i) {
        cin >> vec[i];
    }

    for (int i = 0; i < N; ++i) {
        printBinary(vec[i]);
        cout << endl;
    }

    return 0;
}