#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector< vector<int> > a(n, vector<int>(3));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 3; ++j){
            cin >> a[i][j];
        }
    }


    sort(a.begin(), a.end());

    if(s == "inc"){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < 3; ++j){
                cin >> a[i][j];
            }
        }
    }
    else if(s == "dec"){
        for(int i = n-1; i > -1; --i){
            for(int j = 0; j < 3; ++j){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}