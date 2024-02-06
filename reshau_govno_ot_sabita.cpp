#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int counter = 0;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; ++i){
        if(a[i] + 1 != a[i+1]){
            counter = a[i] + 1;
            break;
        }
    }
    cout << counter;
    return 0;
}