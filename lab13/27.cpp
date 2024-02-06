#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int st;
    string ans;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    for(int i = 1; i < n; ++i) {
        if(v[i] - v[i-1] <= k){
            ans = "cheater";
            break;
        }
        else{
            ans = "no";
        }
    }
    cout << ans;
    return 0;
}