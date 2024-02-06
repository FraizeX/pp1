#include <iostream>
#include <cmath>

using namespace std;

int absolute(int& a){
    return abs(a);
}
int main (){
    int a;
    cin >> a;

    cout << absolute(a);
    return 0;
}