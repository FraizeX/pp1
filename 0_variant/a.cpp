#include <iostream>
#include <cmath>

using namespace std;

bool checkForFactor(int base, int factor){
    if(base % factor != 0){
        return false;
    }
    return true;
}

int main(){
    int base, factor;
    cin >> base >> factor;
    bool ans = checkForFactor(base, factor);
    if(ans){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}