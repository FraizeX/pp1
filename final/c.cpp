#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    cin >> m;
    vector<string> v1(m);
    for(int i = 0; i < m; ++i){
        cin >> v1[i];
    }

    
    vector<string> v2;
    for(int i = 0; i < n; ++i){
        bool found = true;
        for(int j = 0; j < m; ++j){
            if(v[i] == v1[j]){
                found = false;
            }
        }
        if(found){
            cout << v[i] << endl;
        }
    }

    return 0;
}