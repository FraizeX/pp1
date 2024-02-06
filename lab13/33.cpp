#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    string ans;
    string s, t;
    cin >> s >> t;
    map<char, int> s_count, t_count; 
    for(int i = 0; i < s.size(); ++i){
        s_count[s[i]]++;
    }

    for(int i = 0; i < t.size(); ++i){
        t_count[t[i]]++;
    }

    if(s.size() != t.size()){
        ans = "NO";
    }
    if(t_count == s_count){
        ans = "YES";
    }
    else{
        ans = "NO";
    }

    cout << ans;
    return 0;
}