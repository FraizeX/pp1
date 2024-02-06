#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string ans;
    string n;
    cin >> n;
    vector<char> v(n.size());
    for(int i = 0; i < n.size(); ++i){
        v[i] = n[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n.size(); ++i){
        if(n[i] == v[i]){
            ans = "YES";
        }
        else if(n[i] != v[i]){
            ans = "NO";
            break;
        }
    }
    cout << ans;
    return 0;
}