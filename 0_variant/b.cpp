#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector< vector<int> > squarePatch(int n){
    vector< vector<int> > a(n, vector<int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        }
    }
    return a;

}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a = squarePatch(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}