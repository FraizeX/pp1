#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> v1, vector<int> v2) {
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < v1.size(); ++i) {
        sum1 += v1[i];
    }

    for(int i = 0; i < v2.size(); ++i) {
        sum2 += v2[i];
    }

    if(sum1 != sum2){ 
        return sum1 < sum2;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    vector< vector<int> > v(n, vector<int> (n));

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> v[i][j];
        }
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        for(int j = 0; j < v.size(); ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}