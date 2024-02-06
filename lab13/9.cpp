#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int counter = 0;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    int k;
    cin >> k;

    sort(v.begin(), v.end());

    for(int i = 0; i < k; ++i){
        cout << v[i] << " ";
    }
}