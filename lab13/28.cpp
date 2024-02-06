#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= sqrt(n); ++i){
        cout << pow(i, 2) << endl;
    }
    return 0;
}