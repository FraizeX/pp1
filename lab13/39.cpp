#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string ans;
    string s, t;
    cin >> s >> t;
    vector<char> v(s.size());
    for(int i = 0; i < s.size(); ++i){
        v[i] = s[i];
    }

    vector<char> nv(t.size());
    for(int i = 0; i < t.size(); ++i){
        nv[i] = t[i];
    }

    for(int i = 0; i < s.size(); ++i){
        for(int j = 0; j < t.size(); ++j){
            if(v[i] == nv[j]){
                ans = "YES";
            }
            else{
                ans = "NO";
            }
        }
    }

    cout << ans;
    return 0;
}