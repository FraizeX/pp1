#include <iostream>
using namespace std;

void order(int num) {
    if( num > 0 ) {
        order(num-1);
        cout << num << " ";
    }
}

int main() {
    int num; 
    cin >> num;

    order(num);

    return 0;
}