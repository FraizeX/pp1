#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector < vector<int> > v(n, vector<int> (3));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 3; ++j){
            cin >> v[i][j];
        }
    }

    sort(v.begin(), v.end());

    if(s == "inc"){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < 3; ++j){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }

    else if(s == "dec"){
        for(int i = 0; i < n; ++i){
            for(int j = 2; j > -1; --j){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }

}