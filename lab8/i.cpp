#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string ans = "No";
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int k;
    cin >> k;

    for(int i = 0; i < n; i++){
        if(a[i] == k){
            ans = "Yes";
        }
    }
    cout << ans;
    return 0;
}