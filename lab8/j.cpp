#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int max, min;
    max = -99999;
    min = 99999;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }

    cout << max - min;
    return 0;
}