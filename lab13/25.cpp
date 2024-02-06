#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    for(int i = 1; i <= n; ++i){
        string s;
        cin >> s;
        if(m.find(s) == m.end()){
            m[s] = i;
        }
    }

    for(map<string, int>:: iterator it = m.begin(); it != m.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}