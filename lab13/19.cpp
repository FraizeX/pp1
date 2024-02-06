#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > v;
    vector<pair<int, int> > nv;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        nv.push_back(make_pair(x + y, i));
    }

    sort(nv.begin(), nv.end());

    for(int i = 0; i < n; ++i){
        cout << nv[i].first << " " << nv[i].second << endl;
    }
    return 0;
}