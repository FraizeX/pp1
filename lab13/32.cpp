#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string ans;
    string s;
    cin >> s;
    vector<char> v(s.size());
    for(int i = 0; i < s.size(); ++i){
        v[i] = s[i];
    }

    vector<char> nv(s.size());
    for(int i = 0; i < s.size(); ++i){
        nv[i] = s[i];
    }

    reverse(nv.rbegin(), nv.rend());

    for(int i = 0; i < s.size(); ++i){
        if(v[i] == nv[i]){
            ans = "YES";
        }
        else{
            ans = "NO";
            break;
        }
    }

    cout << ans;
    return 0;
}