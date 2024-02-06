#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int counter = 0;
    float total = 0;
    float n;
    cin >> n;
    vector<pair<string, float> > v(n);
    vector<pair<float, string> > nv;
    map<string, float> m;
    for(int i = 0; i < n; ++i){
        cin >> v[i].first >> v[i].second;
        m[v[i].first] += v[i].second;
        total += v[i].second;
    }

    for(map<string, float>::iterator it = m.begin(); it != m.end(); ++it){
        nv.push_back(make_pair((it->second * 100) / total, it -> first));
    }

    sort(nv.begin(), nv.end());
    reverse(nv.begin(), nv.end());

    for(int i = 0; i < nv.size(); ++i){
        cout << nv[i].second << " " << nv[i].first << "%" << endl;
    }
    
    return 0;
}