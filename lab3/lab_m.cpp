#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int element;


    for (;;) {
        if (!(cin >> element)) {
            break;
        }
        sum += element;
    }

    cout<< sum << endl;

    return 0;
}