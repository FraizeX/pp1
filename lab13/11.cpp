#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int counter = 0;
    int ans = 1;
    int n;
    cin >> n;
    while(counter < n){
        counter++;
        ans = ans * counter;
    }
    cout << ans;
    return 0;
}