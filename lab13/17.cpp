#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

float distance(int x0, int y0, int x, int y){
    return sqrt(pow(x - x0, 2) + pow(y - y0, 2));
}

bool compare(pair<pair<int, int>, float>& a, pair<pair<int, int>, float>& b){
    return a.second < b.second;
}

int main(){
    int x0, y0;
    cin >> x0 >> y0;
    int n;
    cin >> n;
    vector<pair<pair<int,int>, float> > vec;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        float d = distance(x0, y0, x, y);
        vec.push_back(make_pair(make_pair(x, y), d));
    }

    sort(vec.begin(), vec.end(), compare);

    for(int i = 0; i < n; ++i){
        cout << vec[i].first.first << " " << vec[i].first.second << endl;
    }
    return 0;
}