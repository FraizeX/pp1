#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int counter = 0;
    int n;
    cin >> n;
    while(pow(2, counter) <= n){
        cout << pow(2, counter) << " ";
        counter++;
    }
    return 0;
}