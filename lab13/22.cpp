#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if(x > y){
        cout << 1;
    }
    else if(x < y){
        cout << 2;
    }
    else if(x == y){
        cout << 0;
    }
    return 0;
}